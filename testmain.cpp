#define CTEST_MAIN

#include "ctest.h"

CTEST(insert_key_a, keyPressed_correct)
{
    // Given
    keybd_event(0x41, 0, 0, 0);
    keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = a;
    ASSERT_EQUAL(expected, result);
}


CTEST(insert_key_b, keyPressed_correct)
{
    // Given
    keybd_event(0x42, 0, 0, 0);
    keybd_event(0x42, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = b;
    ASSERT_EQUAL(expected, result);
}


CTEST(insert_key_c, keyPressed_correct)
{
    // Given
    keybd_event(0x43, 0, 0, 0);
    keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = c;
    ASSERT_EQUAL(expected, result);
}


CTEST(insert_key_d, keyPressed_correct)
{
    // Given
    keybd_event(0x44, 0, 0, 0);
    keybd_event(0x44, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = d;
    ASSERT_EQUAL(expected, result);
}


CTEST(insert_key_e, keyPressed_correct)
{
    // Given
    keybd_event(0x45, 0, 0, 0);
    keybd_event(0x45, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = e;
    ASSERT_EQUAL(expected, result);
}


CTEST(insert_key_f, keyPressed_correct)
{
    // Given
    keybd_event(0x46, 0, 0, 0);
    keybd_event(0x46, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = f;
    ASSERT_EQUAL(expected, result);
}



CTEST(insert_key_g, keyPressed_correct)
{
    // Given
    keybd_event(0x47, 0, 0, 0);
    keybd_event(0x47, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = g;
    ASSERT_EQUAL(expected, result);
}


CTEST(insert_key_h, keyPressed_correct)
{
    // Given
    keybd_event(0x48, 0, 0, 0);
    keybd_event(0x48, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = h;
    ASSERT_EQUAL(expected, result);
}


CTEST(insert_key_i, keyPressed_correct)
{
    // Given
    keybd_event(0x49, 0, 0, 0);
    keybd_event(0x49, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = i;
    ASSERT_EQUAL(expected, result);
}


CTEST(insert_key_j, keyPressed_correct)
{
    // Given
    keybd_event(0x4A, 0, 0, 0);
    keybd_event(0x4A, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = j;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_k, keyPressed_correct)
{
    // Given
    keybd_event(0x4B, 0, 0, 0);
    keybd_event(0x4B, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = k;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_l, keyPressed_correct)
{
    // Given
    keybd_event(0x4C, 0, 0, 0);
    keybd_event(0x4C, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = l;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_m, keyPressed_correct)
{
    // Given
    keybd_event(0x4D, 0, 0, 0);
    keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = m;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_n, keyPressed_correct)
{
    // Given
    keybd_event(0x4E, 0, 0, 0);
    keybd_event(0x4E, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = n;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_o, keyPressed_correct)
{
    // Given
    keybd_event(0x4F, 0, 0, 0);
    keybd_event(0x4F, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = o;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_p, keyPressed_correct)
{
    // Given
    keybd_event(0x50, 0, 0, 0);
    keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = p;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_q, keyPressed_correct)
{
    // Given
    keybd_event(0x51, 0, 0, 0);
    keybd_event(0x51, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = q;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_r, keyPressed_correct)
{
    // Given
    keybd_event(0x52, 0, 0, 0);
    keybd_event(0x52, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = r;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_s, keyPressed_correct)
{
    // Given
    keybd_event(0x53, 0, 0, 0);
    keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = s;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_t, keyPressed_correct)
{
    // Given
    keybd_event(0x54, 0, 0, 0);
    keybd_event(0x54, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = t;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_u, keyPressed_correct)
{
    // Given
    keybd_event(0x55, 0, 0, 0);
    keybd_event(0x55, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = u;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_v, keyPressed_correct)
{
    // Given
    keybd_event(0x56, 0, 0, 0);
    keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = v;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_w, keyPressed_correct)
{
    // Given
    keybd_event(0x57, 0, 0, 0);
    keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = w;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_x, keyPressed_correct)
{
    // Given
    keybd_event(0x58, 0, 0, 0);
    keybd_event(0x58, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = x;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_y, keyPressed_correct)
{
    // Given
    keybd_event(0x59, 0, 0, 0);
    keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = y;
    ASSERT_EQUAL(expected, result);
}

CTEST(insert_key_z, keyPressed_correct)
{
    // Given
    keybd_event(0x5A, 0, 0, 0);
    keybd_event(0x5A, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = z;
    ASSERT_EQUAL(expected, result);
}


CTEST(insert_key_space, keyPressed_correct)
{
    // Given
    keybd_event(0x20, 0, 0, 0);
    keybd_event(0x20, 0, KEYEVENTF_KEYUP, 0);
	KEYS result = NOKEY;
    // When
    result = keypressed();

    // Then
    KEYS expected = space;
    ASSERT_EQUAL(expected, result);
}
