/****************************************************************************** 
fontlargenumber.h
Definition for large font

This file was imported from the MicroView library, written by GeekAmmo
(https://github.com/geekammo/MicroView-Arduino-Library), and released under 
the terms of the GNU General Public License as published by the Free Software 
Foundation, either version 3 of the License, or (at your option) any later 
version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Modified by:
Emil Varughese @ Edwin Robotics Pvt. Ltd.
July 27, 2015
https://github.com/emil01/SparkFun_Micro_OLED_Arduino_Library/

******************************************************************************/
#pragma once


// Define the font attributes
#define FONT_LARGENUM_WIDTH        12
#define FONT_LARGENUM_HEIGHT       48
#define FONT_LARGENUM_START        48
#define FONT_LARGENUM_NCHAR        11
#define FONT_LARGENUM_MAP_WIDTH    132

#if defined(ARDUINO_ARCH_MBED)
	// ARDUINO_ARCH_MBED (APOLLO3 v2) does not support or require pgmspace.h / PROGMEM
	static const uint8_t fontlargenum_data[] = {
#elif defined(__AVR__) || defined(__arm__) || defined(__ARDUINO_ARC__)
	#include <avr/pgmspace.h>
	static const uint8_t fontlargenum_data[] PROGMEM = {
#else
	#include <pgmspace.h>
	static const uint8_t fontlargenum_data[] PROGMEM = {
#endif
	0x00, 0xC0, 0xF8, 0x7C, 0x3E, 0x3E, 0xFC, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0,
	0x78, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x7C, 0x3C, 0x3E, 0x3E, 0xFE, 0xFC,
	0xE0, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x3E, 0x3E, 0x3E, 0xFE, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x3E,
	0x3E, 0x3E, 0x3E, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF0, 0xFC, 0x3E, 0x3E, 0x3E,
	0xFC, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0xFE, 0xFE, 0x00, 0x00,
	0x00, 0x00, 0xC0, 0xF8, 0xFE, 0x3E, 0x7E, 0xFC, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC,
	0x7E, 0x3E, 0xFE, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xC0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0xF9, 0xFF, 0xFF, 0xF0, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x03, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x1F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x3F,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFC,
	0x7F, 0x03, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0xFE, 0xFF, 0x03, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3F, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xE0, 0xFF, 0x1F, 0x00,
	0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFE, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8,
	0xFC, 0xFF, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFE, 0x3F, 0x03, 0x00, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3E, 0x7E, 0xFC, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0x80, 0xF0, 0x7C, 0x7C, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0xF8, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x9F, 0xFF, 0xF8, 0xFE, 0x1F,
	0x01, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0xFC,
	0x7F, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFE, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xE7, 0xE0,
	0xE0, 0xE0, 0xFF, 0xFF, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF,
	0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xF0, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFC, 0x3F,
	0x03, 0x03, 0x1F, 0xFF, 0xFC, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x3E, 0x3E, 0x0F, 0x01,
	0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x07, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFE, 0x0F, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0x00, 0x00,
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x80,
	0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0xFC, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1F, 0x3F, 0x7C, 0x7C, 0x3F, 0x1F, 0x03, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x7C, 0x7C, 0x7C, 0x7F, 0x7F, 0x7C, 0x7C, 0x7C, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7C,
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7E, 0x7C, 0x7C, 0x7E, 0x1F, 0x07,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1F, 0x3E, 0x7C, 0x7C, 0x3E, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1F,
	0x7F, 0x7C, 0x7C, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1F, 0x3F, 0x7E, 0x7C, 0x7E, 0x3F, 0x1F, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x3E, 0x7C, 0x7C, 0x7E, 0x3F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

