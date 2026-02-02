/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2026 Hakusai Zhang
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _XMSTUDIO_AGENTIC_KEYBOARD_H_
#define _XMSTUDIO_AGENTIC_KEYBOARD_H_

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           0

#define LED_NEOPIXEL          _PINNUM(1,  9)
#define NEOPIXELS_NUMBER      1
#define BOARD_RGB_BRIGHTNESS  0x040404


/*
 * KeyScan IO
 */
#define ROW_0_PIN       _PINNUM(1, 11)
#define ROW_1_PIN       _PINNUM(1, 10)
#define ROW_2_PIN       _PINNUM(0,  3)
#define ROW_3_PIN       _PINNUM(0, 28)
#define COL_0_PIN       _PINNUM(1, 13)
#define COL_1_PIN       _PINNUM(0,  2)
#define COL_2_PIN       _PINNUM(0, 29)


/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER        2
#define BUTTON_1              COL_0_PIN  // U1
#define BUTTON_2              COL_2_PIN  // U6
#define BUTTON_PULL           NRF_GPIO_PIN_PULLDOWN

/*------------------------------------------------------------------*/
/* On board regulator control
 *------------------------------------------------------------------*/
#define PWR_KEEP_PIN       _PINNUM(0,  1)  // Enables external pwr

//--------------------------------------------------------------------+
// Display
//--------------------------------------------------------------------+
#define DISPLAY_CONTROLLER_ST7789

#define DISPLAY_PIN_SCK       _PINNUM(0, 13)
#define DISPLAY_PIN_MOSI      _PINNUM(0, 24)

#define DISPLAY_PIN_CS        _PINNUM(0, 12)
#define DISPLAY_PIN_DC        _PINNUM(0,  9)
#define DISPLAY_PIN_RST       _PINNUM(0, 10)
#define DISPLAY_PIN_BL        _PINNUM(0,  5)
#define DISPLAY_BL_ON         1  // GPIO state to enable back light

#define DISPLAY_WIDTH         76
#define DISPLAY_HEIGHT        284

#define DISPLAY_COL_OFFSET    0
#define DISPLAY_ROW_OFFSET    80

// Memory Data Access Control & // Vertical Scroll Start Address
#define DISPLAY_MADCTL        (TFT_MADCTL_MY)
#define DISPLAY_VSCSAD        0

#define DISPLAY_TITLE         "Agentic Keyboard"


//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "xmStudio"
#define BLEDIS_MODEL          "Agentic Keyboard"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x239A
#define USB_DESC_UF2_PID       0x00DA
#define USB_DESC_CDC_ONLY_PID  0x00DA

//--------------------------------------------------------------------+
// UF2
//--------------------------------------------------------------------+
#define UF2_PRODUCT_NAME        "xmStudio Agentic Keyboard"
#define UF2_VOLUME_LABEL        "AGENTICKBD"
#define UF2_BOARD_ID            "AGENTICKBD"
#define UF2_INDEX_URL           "https://github.com/summershrimp"


#endif /* _XMSTUDIO_AGENTIC_KEYBOARD_H_ */
