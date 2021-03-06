#include <Arduino.h>
#include "shapes.h"

Shape4 SHAPES[SHAPE_COUNT] = {
	{ /* i */
		{
			B0000,
			B1111,
			B0000,
			B0000
		}, {
			B0010,
			B0010,
			B0010,
			B0010
		}, {
			B0000,
			B0000,
			B1111,
			B0000
		}, {
			B0100,
			B0100,
			B0100,
			B0100
		}
	}, { /* j */
		{
			B0000,
			B0100,
			B0111,
			B0000
		}, {
			B0011,
			B0010,
			B0010,
			B0000
		}, {
			B0000,
			B0111,
			B0001,
			B0000
		}, {
			B0010,
			B0010,
			B0110,
			B0000
		}
	}, { /* l */
		{
			B0000,
			B0001,
			B0111,
			B0000
		}, {
			B0000,
			B0010,
			B0010,
			B0011
		}, {
			B0000,
			B0000,
			B0111,
			B0100
		}, {
			B0000,
			B0110,
			B0010,
			B0010
		}
	}, { /* o */
		{
			B0000,
			B0110,
			B0110,
			B0000
		}, {
			B0000,
			B0110,
			B0110,
			B0000
		}, {
			B0000,
			B0110,
			B0110,
			B0000
		}, {
			B0000,
			B0110,
			B0110,
			B0000
		}
	}, { /* s */
		{
			B0000,
			B0011,
			B0110,
			B0000
		}, {
			B0000,
			B0010,
			B0011,
			B0001
		}, {
			B0000,
			B0000,
			B0011,
			B0110
		}, {
			B0000,
			B0100,
			B0110,
			B0010
		}
	}, { /* t */
		{
			B0000,
			B0010,
			B0111,
			B0000
		}, {
			B0000,
			B0010,
			B0011,
			B0010
		}, {
			B0000,
			B0000,
			B0111,
			B0010
		}, {
			B0000,
			B0010,
			B0110,
			B0010
		}
	}, { /* z */
		{
			B0000,
			B0110,
			B0011,
			B0000
		}, {
			B0000,
			B0001,
			B0011,
			B0010
		}, {
			B0000,
			B0000,
			B0110,
			B0011
		}, {
			B0000,
			B0010,
			B0110,
			B0100
		}
	}, { /* - */
		{
			B0000,
			B0110,
			B0000,
			B0000
		}, {
			B0000,
			B0100,
			B0100,
			B0000
		}, {
			B0000,
			B0000,
			B0110,
			B0000
		}, {
			B0000,
			B0010,
			B0010,
			B0000
		}
	}
};
