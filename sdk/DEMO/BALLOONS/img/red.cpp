#include "../include.h"

// format: 8-bit paletted pixel graphics
// image width: 40 pixels
// image height: 91 lines
// image pitch: 40 bytes
const u16 RedImg_Pal[256] __attribute__ ((aligned(4))) = {
	0xFFFF, 0xF880, 0xF880, 0xD6BA, 0xB3AE, 0xF637, 0xA8A0, 0xF982, 0xF9E4, 0xFBCC, 0xC38D, 0xFD74, 0xE595, 0xF617, 0xF637, 0xF8C0, 
	0xD0A0, 0xC8A0, 0xC080, 0xC080, 0xB880, 0xB080, 0xB0A0, 0xB080, 0xB080, 0xA8A0, 0xA880, 0xA880, 0xA080, 0xF8C0, 0xB080, 0xF8E0, 
	0xF900, 0xF8E0, 0xF901, 0xF921, 0xF941, 0xF921, 0xF962, 0xF983, 0xF9A3, 0xF983, 0xF9A3, 0xF9C3, 0xF9A4, 0xF9C4, 0xF9E4, 0xF9E4, 
	0xF9E4, 0xF9C4, 0xF9E4, 0xFA05, 0xFA05, 0xFA26, 0xFA46, 0xFA67, 0xC9E5, 0xFA87, 0xFA88, 0xFAA8, 0xFAC8, 0xFAE9, 0xFAE9, 0xFB09, 
	0xFB2A, 0xFB2A, 0xFB4B, 0xFB6B, 0xFB8B, 0xFB8C, 0xFBAC, 0xFBCD, 0xFBCD, 0xFC0E, 0xFC2F, 0xFC4F, 0xFC70, 0xFC90, 0xFCB1, 0xFCD1, 
	0xFCF2, 0xFD12, 0xE491, 0xFD33, 0xE4D2, 0xB3EE, 0xF595, 0xF5D6, 0xCCF2, 0xF617, 0xF617, 0xCD54, 0xF8A0, 0xF8A0, 0xF880, 0xF880, 
	0xF880, 0xF880, 0xF080, 0xF080, 0xF080, 0xF080, 0xF080, 0xE880, 0xE880, 0xE880, 0xE880, 0xE880, 0xE880, 0xE880, 0xE880, 0xE080, 
	0xE080, 0xE080, 0xE080, 0xE080, 0xE080, 0xE080, 0xE080, 0xD880, 0xD880, 0xD880, 0xD880, 0xD8A0, 0xD880, 0xD880, 0xD880, 0xD880, 
	0xD0A0, 0xD080, 0xD080, 0xD080, 0xD080, 0xD080, 0xD080, 0xD080, 0xD080, 0xC880, 0xC880, 0xC880, 0xC880, 0xC880, 0xC880, 0xC080, 
	0xC080, 0xC080, 0xC080, 0xC080, 0xB880, 0xB860, 0xB880, 0xB080, 0xB080, 0xB080, 0xF8C0, 0xC880, 0xC080, 0xB880, 0xB080, 0xB080, 
	0xA880, 0xB080, 0xE0A0, 0xD8A0, 0xE0C1, 0xC0A1, 0xB0E2, 0xC923, 0xB923, 0xDA27, 0xFAA8, 0xF268, 0xFAC9, 0xFAC9, 0xE2A8, 0xAA07, 
	0xFB2B, 0xFB6B, 0xFBEE, 0xCB2B, 0xEC0F, 0xCBCE, 0xB36C, 0xD450, 0xBC71, 0xF860, 0xF860, 0xF880, 0xF860, 0xF880, 0xF880, 0xF880, 
	0xF080, 0xF080, 0xF060, 0xF080, 0xE060, 0xC860, 0xA040, 0xC060, 0xB860, 0xA880, 0x98A1, 0xE102, 0xE1A5, 0x8903, 0xA964, 0xF227, 
	0xF2A9, 0xE268, 0xD248, 0xD2CA, 0xE30B, 0xA2AA, 0xDBEE, 0xE471, 0xDD13, 0xE554, 0xEDD6, 0xF820, 0xF840, 0xF020, 0xE840, 0xD040, 
	0xB820, 0x9820, 0x8881, 0xE3CE, 0xF800, 0xF800, 0xF800, 0xF800, 0xF000, 0xF000, 0xF000, 0xE800, 0xE800, 0xE000, 0xD800, 0xD000, 
	0xC800, 0xC000, 0xB800, 0xB000, 0xA800, 0x9800, 0x9800, 0x9000, 0x8800, 0x8000, 0x7800, 0x8840, 0xE061, 0xE124, 0x9186, 0xDB2C, 
};

const u8 RedImg[3640] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD7, 
	0xD4, 0xA7, 0xC5, 0xA4, 0xA3, 0xC7, 0xA7, 0xD4, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xE3, 0xFD, 0xEB, 0xE8, 0xE5, 0xE4, 0x5D, 0xBA, 0xBA, 0x5E, 0xE4, 0xE5, 
	0xE9, 0xEB, 0xCC, 0xD6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xEC, 0xE7, 0xE5, 0xDC, 0xB9, 
	0xBA, 0xBA, 0xBA, 0x02, 0x02, 0x02, 0x02, 0x02, 0xBB, 0xDC, 0xE5, 0xE8, 0xFC, 0xD6, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xD8, 0xFC, 0xE6, 0xDC, 0x1D, 0x1F, 0x20, 0x1F, 0x1D, 0x5C, 0x02, 0xBA, 0xBA, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x5E, 0x5E, 0xE5, 0xE7, 0xFD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xEA, 0xE5, 0x23, 0x26, 0x2C, 0x2E, 0x30, 0x08, 
	0x2B, 0x27, 0x25, 0x1D, 0x02, 0xBA, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0xE5, 0xEB, 
	0xB7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD2, 0xE8, 
	0x5D, 0x07, 0x30, 0x36, 0x39, 0x3B, 0x3C, 0x3C, 0x3A, 0x37, 0x34, 0x28, 0x23, 0x5E, 0xBA, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x5D, 0xE4, 0xEA, 0xD6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xD2, 0xE7, 0x1D, 0x28, 0x35, 0x3A, 0x3E, 0x42, 0x44, 0x45, 0x45, 
	0xB1, 0x40, 0x3C, 0x36, 0x2D, 0x23, 0x01, 0xBA, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x5E, 
	0xDC, 0xEA, 0xB7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD6, 0xE7, 0x5D, 0x27, 
	0x35, 0xAA, 0x41, 0x46, 0x49, 0x4B, 0x4C, 0x4B, 0x4A, 0x48, 0xB1, 0x3D, 0x36, 0x2A, 0x20, 0xBB, 
	0xBB, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x5E, 0xDB, 0xE9, 0x0C, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xEA, 0xDC, 0x24, 0x32, 0x39, 0x41, 0x48, 0x4B, 0x4F, 0x53, 0x0B, 0x53, 
	0x50, 0x4D, 0x49, 0x43, 0x3C, 0x35, 0x26, 0x5C, 0xBA, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x5D, 0xE5, 0xDE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCB, 0xE5, 0x5C, 0x26, 0x35, 
	0xAC, 0x45, 0x4A, 0x4F, 0x0B, 0x57, 0x5A, 0x59, 0x56, 0x51, 0x4C, 0x47, 0x3F, 0x37, 0x2D, 0x1F, 
	0xBA, 0xBB, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0xE5, 0xA9, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x54, 0xE7, 0xB9, 0x0F, 0x28, 0x36, 0x3F, 0x09, 0x4C, 0x53, 0x57, 0x0E, 0x0D, 0x0E, 
	0x0D, 0x0B, 0x4E, 0xB2, 0xB0, 0x39, 0x2F, 0x20, 0xBB, 0xBB, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x01, 0xB9, 0xEA, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCB, 0xE5, 0xBB, 0x0F, 0x28, 0x36, 
	0x3F, 0x09, 0x4C, 0x53, 0x59, 0x0E, 0x0D, 0x0E, 0x05, 0x56, 0x4E, 0x49, 0x42, 0x39, 0x2E, 0x23, 
	0xBB, 0xBB, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x02, 0x01, 0xE5, 0xCC, 0x00, 0x00, 
	0x00, 0xD9, 0xE9, 0xBA, 0xBA, 0x5C, 0x27, 0x35, 0xAD, 0x45, 0x4A, 0x50, 0x56, 0x59, 0x05, 0x05, 
	0x57, 0x53, 0x4D, 0x48, 0x40, 0x37, 0x2B, 0x1F, 0xBB, 0xBB, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0xDC, 0xEB, 0x00, 0x00, 0x00, 0xAE, 0xE5, 0x5E, 0xBA, 0x02, 0x25, 0x33, 
	0x3A, 0xB0, 0x48, 0x4C, 0x50, 0x53, 0x0B, 0x0B, 0x51, 0x4D, 0x49, 0xB1, 0xAC, 0x35, 0x27, 0x9A, 
	0xBA, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x5E, 0xE7, 0xE3, 0x00, 
	0x00, 0xA2, 0xE4, 0x02, 0x02, 0xBA, 0x1D, 0x28, 0x36, 0x3C, 0x42, 0x48, 0x4A, 0x4C, 0x4D, 0x4D, 
	0x4B, 0xB2, 0xB1, 0x3E, 0x37, 0x2F, 0x23, 0x02, 0xBA, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0xE5, 0xCC, 0x00, 0xDA, 0xEA, 0xBA, 0x02, 0x01, 0xBA, 0x02, 0x22, 
	0x2A, 0x36, 0xAA, 0x40, 0xB1, 0x46, 0x47, 0x46, 0x44, 0x41, 0xAC, 0x37, 0x32, 0x24, 0x5C, 0xBA, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xDB, 0xC2, 0x00, 
	0xD6, 0xE7, 0x5E, 0x01, 0x01, 0x02, 0xBA, 0x02, 0x20, 0x28, 0x34, 0x37, 0x3B, 0x3C, 0x3D, 0x3D, 
	0x3B, 0x39, 0x35, 0x2C, 0x25, 0x5C, 0xBA, 0xBB, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0xBB, 0xEC, 0xD8, 0xD3, 0xE6, 0x01, 0x02, 0x02, 0x02, 0x02, 0xBA, 
	0xBB, 0x1D, 0x24, 0x29, 0x31, 0x33, 0x34, 0x34, 0x32, 0x2C, 0x26, 0x21, 0x01, 0xBA, 0xBB, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xE8, 0x50, 
	0xD0, 0xE5, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0xBA, 0xBA, 0x02, 0x9A, 0x21, 0x25, 0x25, 0x25, 
	0x22, 0x1D, 0x5D, 0xBA, 0xBA, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0xDB, 0xD3, 0xCF, 0xE4, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0xBA, 0xBA, 0xBA, 0xBA, 0xBB, 0xBB, 0xBA, 0xBA, 0xBA, 0xBB, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x5E, 0x5E, 0x5C, 0xF8, 
	0xC8, 0x02, 0x01, 0x5E, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xBB, 0xBA, 0xBA, 0xBA, 
	0xBB, 0xBB, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x01, 0x01, 0x01, 0x5D, 0xCA, 0xA5, 0xBA, 0x01, 0x5E, 0x01, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x02, 0x02, 0x5E, 0x5C, 0xE1, 
	0xAB, 0xE8, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x01, 0x5E, 0x5E, 0x01, 0x01, 0xCA, 0xD1, 0xEA, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x5E, 0x5E, 0x5E, 0x01, 0x60, 0xEB, 0xB4, 
	0xD3, 0xEC, 0x61, 0x01, 0x02, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xBB, 0x02, 0x02, 0x01, 
	0x01, 0x01, 0x5E, 0x01, 0x5F, 0x61, 0xEE, 0xD7, 0xB7, 0xEE, 0x63, 0x61, 0x02, 0x02, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0xBB, 0xBB, 0x01, 0x02, 0x01, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x62, 0xBE, 0xF0, 0x58, 
	0xDA, 0xEE, 0xC2, 0x62, 0x60, 0xBB, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x02, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x5E, 0x01, 0x02, 0x61, 0x63, 0xDD, 0xDF, 0x00, 0x00, 0xF1, 0xDD, 0xC3, 0x62, 0x60, 0x02, 0x01, 
	0x01, 0x02, 0x02, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x02, 0x02, 0x02, 
	0x02, 0x01, 0x02, 0x01, 0x01, 0x01, 0x5E, 0x01, 0x02, 0xBD, 0x61, 0xC1, 0x66, 0xEB, 0xA7, 0x00, 
	0x00, 0x38, 0xED, 0x69, 0xC3, 0x62, 0xBE, 0x02, 0xBB, 0x02, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 
	0x01, 0x02, 0x02, 0x01, 0x01, 0x01, 0x02, 0x01, 0x02, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x02, 
	0x5F, 0x62, 0x63, 0x66, 0x6A, 0xED, 0xD3, 0x00, 0x00, 0xB5, 0xEF, 0x6C, 0x68, 0x66, 0x62, 0x62, 
	0x60, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x5E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x5E, 
	0x5E, 0x5E, 0x01, 0x01, 0x01, 0x01, 0x5F, 0x61, 0x62, 0x64, 0x68, 0x68, 0x69, 0xF1, 0xD8, 0x00, 
	0x00, 0x00, 0xF2, 0xDE, 0x6D, 0x6A, 0x65, 0x63, 0x63, 0x62, 0xBE, 0xBD, 0x02, 0x02, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x5E, 0x01, 0x01, 0x01, 0x02, 0xBB, 0xBD, 0x60, 0x62, 0x63, 
	0x65, 0x68, 0x69, 0x70, 0xED, 0xC8, 0x00, 0x00, 0x00, 0x00, 0xA8, 0xEE, 0x75, 0x6D, 0x69, 0x68, 
	0x66, 0x64, 0x62, 0x61, 0xBE, 0xBE, 0xBD, 0xBB, 0xBB, 0xBB, 0x01, 0x01, 0xBB, 0xBB, 0xBB, 0xBC, 
	0xBA, 0x5F, 0x5F, 0xBF, 0x62, 0x63, 0x64, 0x66, 0x67, 0x6C, 0x70, 0x77, 0xEF, 0xD2, 0x00, 0x00, 
	0x00, 0x00, 0xB7, 0xF1, 0x78, 0x73, 0x6F, 0x69, 0x69, 0x68, 0x66, 0x64, 0x63, 0x62, 0x61, 0x61, 
	0xBF, 0x60, 0x60, 0x60, 0xBE, 0xBE, 0x61, 0xBF, 0x60, 0x61, 0x60, 0x61, 0x63, 0x64, 0x66, 0x69, 
	0x6B, 0x70, 0x75, 0xC4, 0xF2, 0x5B, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC8, 0xEE, 0x7C, 0x77, 0x72, 
	0x6E, 0x69, 0x69, 0x67, 0x68, 0x65, 0x64, 0x64, 0x64, 0x63, 0x62, 0xC0, 0x63, 0x63, 0x63, 0x63, 
	0x61, 0x5F, 0xBC, 0xBE, 0x61, 0x62, 0x65, 0x69, 0x71, 0x78, 0x7F, 0xEF, 0xA8, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xB3, 0xF2, 0x81, 0x7E, 0x77, 0x73, 0x71, 0x6E, 0x6B, 0x6C, 0x69, 0x68, 0x68, 
	0x66, 0x66, 0x66, 0x66, 0x66, 0x64, 0x62, 0x60, 0xBD, 0x02, 0x02, 0x02, 0x5F, 0x61, 0xC1, 0x69, 
	0x77, 0x7C, 0x82, 0xF3, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF3, 0xDF, 0x85, 0x7C, 
	0x79, 0x78, 0x74, 0x72, 0x72, 0x6D, 0x6B, 0x69, 0x69, 0x6A, 0x6A, 0x6C, 0x67, 0x63, 0x61, 0xBB, 
	0x01, 0x5E, 0x01, 0x01, 0x02, 0x60, 0x63, 0x69, 0x76, 0x83, 0xF0, 0xA6, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0A, 0xF3, 0x87, 0x85, 0x84, 0x7C, 0x7A, 0x77, 0x77, 0x71, 0x71, 0x72, 
	0x6F, 0x6D, 0x6D, 0x6C, 0x66, 0x62, 0x5F, 0x01, 0x01, 0x5E, 0x01, 0x01, 0x01, 0xBD, 0x63, 0x6D, 
	0x77, 0x86, 0xF4, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC9, 0xF1, 0x11, 
	0x88, 0x84, 0x82, 0x7E, 0x7C, 0x7A, 0x78, 0x76, 0x77, 0x76, 0x71, 0x69, 0x64, 0xBD, 0x01, 0x5E, 
	0x5E, 0x01, 0x01, 0x5E, 0x5E, 0x02, 0x65, 0x72, 0x7F, 0xF1, 0xCE, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0xF4, 0xC5, 0x8D, 0x8B, 0x88, 0x84, 0x84, 0x84, 0x7E, 0x7C, 
	0x7C, 0x7C, 0x73, 0x69, 0x64, 0x02, 0x02, 0x01, 0x01, 0x01, 0x02, 0x5E, 0x01, 0x62, 0x69, 0x7B, 
	0xC5, 0xF5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAF, 0xF3, 
	0x8F, 0x8F, 0x8D, 0x8B, 0x89, 0x88, 0x82, 0x82, 0x82, 0x82, 0x78, 0x6D, 0xC3, 0xBD, 0x01, 0x01, 
	0x02, 0x01, 0x01, 0x01, 0x5F, 0x65, 0x74, 0x7F, 0xF4, 0xB6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE1, 0xF2, 0x13, 0x8F, 0x9B, 0x9B, 0x8A, 0x89, 0x88, 
	0x86, 0x87, 0x7D, 0x72, 0x67, 0xC0, 0x01, 0x01, 0x01, 0x01, 0x5E, 0x5F, 0x65, 0x74, 0x80, 0xF2, 
	0xCA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5B, 
	0xF6, 0xE0, 0x14, 0x93, 0x9C, 0x8E, 0x8E, 0x8D, 0x8D, 0x8C, 0x84, 0x76, 0x6D, 0x65, 0x62, 0x5F, 
	0xBD, 0x5F, 0x63, 0x69, 0x73, 0x10, 0xF2, 0xF6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xF6, 0x95, 0x9D, 0x94, 0x93, 0x91, 0x90, 
	0x9C, 0x8E, 0x8A, 0x82, 0x7A, 0x74, 0x6C, 0x6A, 0x6A, 0x6D, 0x73, 0x79, 0x87, 0xE0, 0xF7, 0x5B, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xB6, 0xF6, 0x95, 0x1E, 0x96, 0x96, 0x94, 0x93, 0x93, 0x93, 0x8E, 0x89, 0x83, 0x7D, 0x7D, 
	0x7D, 0x86, 0x8B, 0x12, 0xF3, 0xF7, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD5, 0xF7, 0x99, 0x15, 0x9E, 0x97, 
	0x96, 0x96, 0x96, 0x96, 0x94, 0x92, 0x13, 0x90, 0x91, 0x94, 0x15, 0xF3, 0xF8, 0x55, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xD5, 0xF8, 0xF4, 0x16, 0x18, 0x17, 0x9E, 0x9F, 0x9F, 0xA1, 0x98, 0x98, 0x98, 
	0x18, 0x19, 0xF5, 0xF9, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xF9, 0xF6, 0x06, 
	0xA0, 0xA0, 0xA0, 0x1A, 0x1A, 0x1A, 0x1A, 0x06, 0x1B, 0xF6, 0xFB, 0x5B, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCD, 0xF9, 0xF5, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xF6, 
	0xF9, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0xE2, 0xFA, 0xF8, 0x1B, 0xC6, 0xF9, 0xFA, 0xCD, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB8, 0xB6, 0xFA, 0xCD, 0xB6, 0x5B, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};