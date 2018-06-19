#include "stdafx.h"
#include "D:\Visual\Projects\KeyN\Keyboard.h"
#include <windows.h>

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace	Microsoft::VisualStudio::TestTools::UnitTesting;

namespace KeyTest
{
	[TestClass]
	public ref class IsNotEqual
	{
	public: 
		[TestMethod]
		void IsNotEqualTest()
		{

			WORD VirtLetters[26] = { 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49,
				0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x50, 0x51, 0x52,
				0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A };

			char Letters[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
				'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
				's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

			char resultch, expectedch;
			int ij,ji = 0;

			KEYS result = NOKEY;

			// This structure will be used to create the keyboard
			// input event.
			INPUT ip;

			// Set up a generic keyboard event.
			ip.type = INPUT_KEYBOARD;
			ip.ki.wScan = 0; // hardware scan code for key
			ip.ki.time = 0;
			ip.ki.dwExtraInfo = 0;
			for (ij = 0; ij < 26; ij++)
				for (ji = 0; ji < 26; ji++ ){
				
					if (ij != ji){
						ip.ki.wVk = VirtLetters[ij];
						ip.ki.dwFlags = 0;
						SendInput(1, &ip, sizeof(INPUT));

						ip.ki.dwFlags = KEYEVENTF_KEYUP;
						SendInput(1, &ip, sizeof(INPUT));

						result = keyPressed();

						expectedch = Letters[ji];

						if (result == VirtLetters[ij])	{ resultch = Letters[ij]; }

						Assert::AreNotEqual(expectedch, resultch);
					}
			}
				Assert::AreEqual(26, ij);
				Assert::AreEqual(26, ji);

		}
	};
}
