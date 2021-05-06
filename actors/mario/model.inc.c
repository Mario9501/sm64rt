Lights1 mario_Pants_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_Shirt_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_Hand_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_face_0___Open_Eyes_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_face_1___Half_Eyes_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_face_2___Closed_Eyes_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_face_7___Dead_Eyes_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx mario_pants_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 mario_pants_rgba32[] = {
	#include "actors/mario/pants.rgba32.inc.c"
};

Gfx mario_ShirtPattern_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 mario_ShirtPattern_rgba32[] = {
	#include "actors/mario/ShirtPattern.rgba32.inc.c"
};

Gfx mario_metal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 mario_metal_rgba16[] = {
	#include "actors/mario/metal.rgba16.inc.c"
};

Gfx mario_Hand_Texture_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 mario_Hand_Texture_rgba32[] = {
	#include "actors/mario/Hand_Texture.rgba32.inc.c"
};

Gfx mario_FullFace_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 mario_FullFace_rgba32[] = {
	#include "actors/mario/FullFace.rgba32.inc.c"
};

Gfx mario_HalfBlink_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 mario_HalfBlink_rgba32[] = {
	#include "actors/mario/HalfBlink.rgba32.inc.c"
};

Gfx mario_FaceBlink_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 mario_FaceBlink_rgba32[] = {
	#include "actors/mario/FaceBlink.rgba32.inc.c"
};

Gfx mario_FrightenedFace_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 mario_FrightenedFace_rgba32[] = {
	#include "actors/mario/FrightenedFace.rgba32.inc.c"
};

Gfx mario_wingCombined_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 mario_wingCombined_rgba32[] = {
	#include "actors/mario/wingCombined.rgba32.inc.c"
};

Vtx mario_000_offset_bottom_mesh_layer_1_vtx_0[29] = {
	{79, -21, 38, 0, 875, -976, 0x71, 0xD5, 0x26, 0xFF},
	{44, -29, 79, 0, 1734, -657, 0x25, 0xB6, 0x60, 0xFF},
	{41, -61, 0, 0, 367, -155, 0x1C, 0x84, 0x0, 0xFF},
	{37, 14, 87, 0, 1734, -1910, 0x1E, 0x8, 0x7B, 0xFF},
	{70, 33, 43, 0, 896, -2026, 0x6C, 0x34, 0x29, 0xFF},
	{74, 36, 0, 0, 153, -2030, 0x6F, 0x3E, 0x0, 0xFF},
	{79, -21, 0, 0, 281, -908, 0x78, 0xD5, 0x0, 0xFF},
	{79, -21, -39, 0, 875, -976, 0x71, 0xD5, 0xDA, 0xFF},
	{44, -29, -79, 0, 1734, -657, 0x25, 0xB6, 0xA0, 0xFF},
	{37, 14, -88, 0, 1734, -1910, 0x1E, 0x8, 0x85, 0xFF},
	{70, 33, -44, 0, 896, -2026, 0x6C, 0x34, 0xD7, 0xFF},
	{12, -16, 79, 0, -129, 2832, 0xAE, 0xD3, 0x56, 0xFF},
	{44, -29, 79, 0, -1221, 3455, 0x25, 0xB6, 0x60, 0xFF},
	{37, 14, 87, 0, -1030, 1761, 0x1E, 0x8, 0x7B, 0xFF},
	{10, -55, 0, 0, 679, 3280, 0xB2, 0x9B, 0x0, 0xFF},
	{-5, -7, 0, 0, 655, 2602, 0x81, 0xF6, 0x0, 0xFF},
	{12, 47, 73, 0, 89, 1914, 0xA7, 0x3E, 0x42, 0xFF},
	{36, 54, 79, 0, -167, 1411, 0x18, 0x59, 0x58, 0xFF},
	{70, 33, 43, 0, -591, 129, 0x6C, 0x34, 0x29, 0xFF},
	{34, 68, 0, 0, 608, 1234, 0xC, 0x7E, 0x0, 0xFF},
	{74, 36, 0, 0, 560, -153, 0x6F, 0x3E, 0x0, 0xFF},
	{70, 33, -44, 0, -591, 129, 0x6C, 0x34, 0xD7, 0xFF},
	{36, 54, -80, 0, -167, 1411, 0x18, 0x59, 0xA8, 0xFF},
	{37, 14, -88, 0, -1030, 1761, 0x1E, 0x8, 0x85, 0xFF},
	{12, 47, -73, 0, 89, 1914, 0xA7, 0x3E, 0xBE, 0xFF},
	{12, -16, -79, 0, -129, 2832, 0xAE, 0xD3, 0xAA, 0xFF},
	{44, -29, -79, 0, -1221, 3455, 0x25, 0xB6, 0xA0, 0xFF},
	{41, -61, 0, 0, 718, 4420, 0x1C, 0x84, 0x0, 0xFF},
	{6, 54, 0, 0, 629, 1837, 0x9B, 0x4D, 0x0, 0xFF},
};

Gfx mario_000_offset_bottom_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_bottom_mesh_layer_1_vtx_0 + 0, 29, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 5, 4, 0, 0),
	gsSP2Triangles(6, 5, 0, 0, 0, 2, 6, 0),
	gsSP2Triangles(7, 6, 2, 0, 7, 2, 8, 0),
	gsSP2Triangles(7, 8, 9, 0, 9, 10, 7, 0),
	gsSP2Triangles(5, 7, 10, 0, 6, 7, 5, 0),
	gsSP2Triangles(11, 12, 13, 0, 12, 11, 14, 0),
	gsSP2Triangles(15, 14, 11, 0, 16, 15, 11, 0),
	gsSP2Triangles(13, 16, 11, 0, 17, 16, 13, 0),
	gsSP2Triangles(17, 13, 18, 0, 18, 19, 17, 0),
	gsSP2Triangles(18, 20, 19, 0, 21, 19, 20, 0),
	gsSP2Triangles(21, 22, 19, 0, 22, 21, 23, 0),
	gsSP2Triangles(22, 23, 24, 0, 23, 25, 24, 0),
	gsSP2Triangles(25, 23, 26, 0, 26, 14, 25, 0),
	gsSP2Triangles(27, 14, 26, 0, 27, 12, 14, 0),
	gsSP2Triangles(15, 25, 14, 0, 24, 25, 15, 0),
	gsSP2Triangles(24, 15, 28, 0, 16, 28, 15, 0),
	gsSP2Triangles(16, 19, 28, 0, 16, 17, 19, 0),
	gsSP2Triangles(24, 28, 19, 0, 24, 19, 22, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_bottom_mesh_layer_1_vtx_1[20] = {
	{75, 57, -82, 0, -331, 2738, 0x1D, 0x54, 0xA5, 0xFF},
	{32, -29, -107, 0, -1343, 3342, 0xBB, 0xCE, 0xA1, 0xFF},
	{33, 65, -100, 0, -387, 3342, 0xBF, 0x45, 0xAB, 0xFF},
	{75, -25, -90, 0, -1275, 2729, 0x1D, 0xC2, 0x95, 0xFF},
	{33, 85, 0, 0, 496, 3342, 0xA8, 0x5C, 0x0, 0xFF},
	{74, 74, 0, 0, 496, 2750, 0xF, 0x7E, 0x0, 0xFF},
	{75, 57, 82, 0, -331, 2738, 0x1D, 0x54, 0x5B, 0xFF},
	{33, 65, 100, 0, -387, 3342, 0xBF, 0x45, 0x55, 0xFF},
	{63, 2, 0, 0, 496, 3089, 0x81, 0x3, 0x0, 0xFF},
	{32, -29, -107, 0, -486, 3342, 0xBB, 0xCE, 0xA1, 0xFF},
	{32, -83, 0, 0, 496, 3342, 0xB1, 0x9C, 0x0, 0xFF},
	{75, -25, -90, 0, -418, 2729, 0x1D, 0xC2, 0x95, 0xFF},
	{75, -71, 0, 0, 496, 2735, 0x16, 0x83, 0x0, 0xFF},
	{75, -25, 89, 0, -418, 2729, 0x1D, 0xC2, 0x6B, 0xFF},
	{32, -29, 106, 0, -486, 3342, 0xBB, 0xCE, 0x5F, 0xFF},
	{32, -29, 106, 0, -1343, 3342, 0xBB, 0xCE, 0x5F, 0xFF},
	{75, -25, 89, 0, -1275, 2729, 0x1D, 0xC2, 0x6B, 0xFF},
	{170, 61, -74, 0, -294, 434, 0x11, 0x5A, 0xA8, 0xFF},
	{171, 75, 0, 0, 496, 479, 0x14, 0x7D, 0x0, 0xFF},
	{170, 61, 73, 0, -294, 434, 0x11, 0x5A, 0x57, 0xFF},
};

Gfx mario_000_offset_bottom_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_offset_bottom_mesh_layer_1_vtx_1 + 0, 20, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 0, 2, 0, 4, 5, 0, 0),
	gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
	gsSP2Triangles(4, 8, 7, 0, 4, 2, 8, 0),
	gsSP2Triangles(2, 9, 8, 0, 9, 10, 8, 0),
	gsSP2Triangles(11, 10, 9, 0, 11, 12, 10, 0),
	gsSP2Triangles(13, 10, 12, 0, 13, 14, 10, 0),
	gsSP2Triangles(14, 8, 10, 0, 7, 8, 14, 0),
	gsSP2Triangles(6, 7, 15, 0, 6, 15, 16, 0),
	gsSP2Triangles(17, 0, 5, 0, 17, 5, 18, 0),
	gsSP2Triangles(19, 18, 5, 0, 19, 5, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_001_Chest_skinned_mesh_layer_1_vtx_0[10] = {
	{75, -71, 0, 0, 496, 2735, 0x16, 0x83, 0x0, 0xFF},
	{170, 61, -74, 0, -294, 434, 0x11, 0x5A, 0xA8, 0xFF},
	{75, 57, -82, 0, -331, 2738, 0x1D, 0x54, 0xA5, 0xFF},
	{75, -25, -90, 0, -1275, 2729, 0x1D, 0xC2, 0x95, 0xFF},
	{75, -25, -90, 0, -418, 2729, 0x1D, 0xC2, 0x95, 0xFF},
	{171, 75, 0, 0, 496, 479, 0x14, 0x7D, 0x0, 0xFF},
	{170, 61, 73, 0, -294, 434, 0x11, 0x5A, 0x57, 0xFF},
	{75, 57, 82, 0, -331, 2738, 0x1D, 0x54, 0x5B, 0xFF},
	{75, -25, 89, 0, -1275, 2729, 0x1D, 0xC2, 0x6B, 0xFF},
	{75, -25, 89, 0, -418, 2729, 0x1D, 0xC2, 0x6B, 0xFF},
};

Gfx mario_000_offset_001_Chest_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_001_Chest_skinned_mesh_layer_1_vtx_0 + 0, 10, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_001_Chest_mesh_layer_1_vtx_0[8] = {
	{-11, -23, -84, 0, -1228, 464, 0xB, 0xC2, 0x92, 0xFF},
	{65, 37, -73, 0, -231, -620, 0x4B, 0x3E, 0xAF, 0xFF},
	{62, 53, 0, 0, 496, -583, 0x50, 0x62, 0x0, 0xFF},
	{65, 37, 73, 0, -231, -620, 0x4B, 0x3E, 0x51, 0xFF},
	{-11, -23, 84, 0, -1228, 464, 0xB, 0xC2, 0x6E, 0xFF},
	{-11, -23, -84, 0, -371, 464, 0xB, 0xC2, 0x92, 0xFF},
	{-16, -65, 0, 0, 496, 544, 0xB, 0x81, 0x0, 0xFF},
	{-11, -23, 84, 0, -371, 464, 0xB, 0xC2, 0x6E, 0xFF},
};

Gfx mario_000_offset_001_Chest_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_001_Chest_mesh_layer_1_vtx_0 + 0, 8, 10),
	gsSP2Triangles(2, 10, 3, 0, 1, 10, 2, 0),
	gsSP2Triangles(10, 1, 11, 0, 11, 1, 5, 0),
	gsSP2Triangles(11, 5, 12, 0, 12, 5, 6, 0),
	gsSP2Triangles(12, 6, 13, 0, 14, 13, 6, 0),
	gsSP2Triangles(7, 14, 6, 0, 8, 14, 7, 0),
	gsSP2Triangles(4, 15, 0, 0, 0, 15, 16, 0),
	gsSP2Triangles(17, 0, 16, 0, 9, 0, 17, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_001_Chest_mesh_layer_1_vtx_1[31] = {
	{-11, -23, -84, 0, -1228, 464, 0xB, 0xC2, 0x92, 0xFF},
	{65, 37, -73, 0, -231, -620, 0x4B, 0x3E, 0xAF, 0xFF},
	{70, -19, -75, 0, -1125, -679, 0x4B, 0xCD, 0xA7, 0xFF},
	{-11, -23, 84, 0, -1228, 464, 0xB, 0xC2, 0x6E, 0xFF},
	{70, -19, 75, 0, -1125, -679, 0x4B, 0xCD, 0x59, 0xFF},
	{65, 37, 73, 0, -231, -620, 0x4B, 0x3E, 0x51, 0xFF},
	{-16, -65, 0, 0, 496, 544, 0xB, 0x81, 0x0, 0xFF},
	{70, -19, 75, 0, -268, -679, 0x4B, 0xCD, 0x59, 0xFF},
	{-11, -23, 84, 0, -371, 464, 0xB, 0xC2, 0x6E, 0xFF},
	{65, -55, 0, 0, 496, -617, 0x3F, 0x92, 0x0, 0xFF},
	{70, -19, -75, 0, -268, -679, 0x4B, 0xCD, 0xA7, 0xFF},
	{-11, -23, -84, 0, -371, 464, 0xB, 0xC2, 0x92, 0xFF},
	{80, -12, -39, 0, 103, -805, 0x6C, 0xDD, 0xC7, 0xFF},
	{78, -32, 0, 0, 496, -793, 0x59, 0xA5, 0x0, 0xFF},
	{80, -12, 39, 0, 103, -805, 0x6C, 0xDD, 0x39, 0xFF},
	{74, 23, 31, 0, 189, -735, 0x66, 0x41, 0x28, 0xFF},
	{62, 53, 0, 0, 496, -583, 0x50, 0x62, 0x0, 0xFF},
	{72, 30, 0, 0, 496, -704, 0x57, 0x5D, 0x0, 0xFF},
	{74, 23, -31, 0, 189, -735, 0x66, 0x41, 0xD8, 0xFF},
	{74, 23, -31, 0, -378, 1077, 0x66, 0x41, 0xD8, 0xFF},
	{72, 30, 0, 0, 496, 1077, 0x57, 0x5D, 0x0, 0xFF},
	{81, 28, 0, 0, 496, 603, 0x28, 0x79, 0x0, 0xFF},
	{83, 22, 27, 0, 1274, 603, 0x30, 0x5B, 0x4B, 0xFF},
	{74, 23, 31, 0, 1370, 1077, 0x66, 0x41, 0x28, 0xFF},
	{88, -9, 35, 0, 1740, 603, 0x2B, 0xD8, 0x71, 0xFF},
	{80, -12, 39, 0, 1894, 1077, 0x6C, 0xDD, 0x39, 0xFF},
	{86, -30, 0, 0, 496, 603, 0x19, 0x83, 0x0, 0xFF},
	{78, -32, 0, 0, 496, 1077, 0x59, 0xA5, 0x0, 0xFF},
	{88, -9, -35, 0, -748, 603, 0x2B, 0xD8, 0x8F, 0xFF},
	{80, -12, -39, 0, -902, 1077, 0x6C, 0xDD, 0xC7, 0xFF},
	{83, 22, -28, 0, -282, 603, 0x30, 0x5B, 0xB5, 0xFF},
};

Gfx mario_000_offset_001_Chest_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_offset_001_Chest_mesh_layer_1_vtx_1 + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(6, 10, 9, 0, 6, 11, 10, 0),
	gsSP2Triangles(12, 9, 10, 0, 12, 13, 9, 0),
	gsSP2Triangles(14, 9, 13, 0, 14, 7, 9, 0),
	gsSP2Triangles(14, 5, 7, 0, 14, 15, 5, 0),
	gsSP2Triangles(15, 16, 5, 0, 15, 17, 16, 0),
	gsSP2Triangles(18, 16, 17, 0, 18, 1, 16, 0),
	gsSP2Triangles(12, 1, 18, 0, 12, 10, 1, 0),
	gsSP2Triangles(19, 20, 21, 0, 20, 22, 21, 0),
	gsSP2Triangles(20, 23, 22, 0, 23, 24, 22, 0),
	gsSP2Triangles(23, 25, 24, 0, 25, 26, 24, 0),
	gsSP2Triangles(25, 27, 26, 0, 27, 28, 26, 0),
	gsSP2Triangles(27, 29, 28, 0, 29, 30, 28, 0),
	gsSP2Triangles(29, 19, 30, 0, 19, 21, 30, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_Head_skinned_mesh_layer_1_vtx_0[6] = {
	{83, 22, -28, 0, 100, 7, 0x30, 0x5B, 0xB5, 0xFF},
	{81, 28, 0, 0, 78, 5, 0x28, 0x79, 0x0, 0xFF},
	{86, -30, 0, 0, 78, 52, 0x19, 0x83, 0x0, 0xFF},
	{88, -9, 35, 0, 104, 39, 0x2B, 0xD8, 0x71, 0xFF},
	{83, 22, 27, 0, 100, 7, 0x30, 0x5B, 0x4B, 0xFF},
	{88, -9, -35, 0, 104, 39, 0x2B, 0xD8, 0x8F, 0xFF},
};

Gfx mario_000_displaylist_Head_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_displaylist_Head_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_Head_mesh_layer_1_vtx_0[1] = {
	{129, -29, 0, 0, 78, 29, 0x7C, 0xE4, 0x0, 0xFF},
};

Gfx mario_000_displaylist_Head_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_displaylist_Head_mesh_layer_1_vtx_0 + 0, 1, 6),
	gsSP2Triangles(0, 1, 6, 0, 4, 6, 1, 0),
	gsSP2Triangles(3, 6, 4, 0, 2, 6, 3, 0),
	gsSP2Triangles(2, 5, 6, 0, 5, 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_Head_mesh_layer_1_vtx_1[107] = {
	{110, 80, 0, 0, 536, 1446, 0x5D, 0x57, 0x0, 0xFF},
	{95, 48, 76, 0, -71, 1561, 0xF, 0x2E, 0x76, 0xFF},
	{180, 43, 64, 0, 22, 880, 0x41, 0x40, 0x58, 0xFF},
	{183, 61, 0, 0, 541, 859, 0x47, 0x69, 0x3, 0xFF},
	{180, 44, -64, 0, 22, 880, 0x3D, 0x42, 0xA6, 0xFF},
	{95, 48, -76, 0, -71, 1561, 0xE, 0x2F, 0x8B, 0xFF},
	{104, -52, -71, 0, 890, 1940, 0xE7, 0xA2, 0x52, 0xFF},
	{188, -43, -61, 0, 938, 1930, 0x40, 0xA9, 0xBC, 0xFF},
	{169, -43, -41, 0, 928, 1930, 0xE8, 0xB9, 0x67, 0xFF},
	{116, -52, -89, 0, 896, 1940, 0x4, 0x8C, 0xCD, 0xFF},
	{20, -30, -88, 0, 840, 1903, 0xAF, 0xA5, 0xDC, 0xFF},
	{26, -27, -70, 0, 843, 1900, 0xD4, 0xBC, 0x62, 0xFF},
	{50, 11, -74, 0, 855, 1853, 0x1E, 0xD, 0x7B, 0xFF},
	{112, -4, -81, 0, 895, 1885, 0xF7, 0x30, 0x75, 0xFF},
	{184, 2, -63, 0, 936, 1877, 0x4A, 0x67, 0x0, 0xFF},
	{119, 25, -97, 0, 899, 1851, 0x2C, 0x76, 0xE, 0xFF},
	{123, 12, -110, 0, 901, 1866, 0x32, 0x33, 0x97, 0xFF},
	{124, -26, -115, 0, 901, 1910, 0x23, 0xD8, 0x8D, 0xFF},
	{49, -6, -119, 0, 855, 1873, 0xE2, 0xE2, 0x88, 0xFF},
	{11, 63, -104, 0, 831, 1797, 0xB4, 0xD, 0x9B, 0xFF},
	{-7, 21, -72, 0, 822, 1847, 0x89, 0xEB, 0x28, 0xFF},
	{11, 40, -66, 0, 831, 1823, 0xE4, 0x1, 0x7C, 0xFF},
	{28, 72, -61, 0, 840, 1785, 0x10, 0x28, 0x78, 0xFF},
	{65, 47, -90, 0, 862, 1810, 0x5E, 0x45, 0x33, 0xFF},
	{63, 40, -108, 0, 862, 1819, 0x24, 0x3B, 0x95, 0xFF},
	{29, 93, -104, 0, 840, 1760, 0xFD, 0x5A, 0xA6, 0xFF},
	{4, 90, -79, 0, 826, 1766, 0xA9, 0x58, 0x1C, 0xFF},
	{42, 94, -89, 0, 848, 1758, 0x48, 0x68, 0xF, 0xFF},
	{124, -26, 115, 0, 901, 1910, 0x24, 0xD8, 0x73, 0xFF},
	{187, -44, 59, 0, 938, 1931, 0x40, 0xA7, 0x40, 0xFF},
	{183, 3, 61, 0, 935, 1876, 0x4C, 0x66, 0xFD, 0xFF},
	{116, -52, 89, 0, 896, 1940, 0x5, 0x8C, 0x33, 0xFF},
	{49, -6, 119, 0, 855, 1873, 0xE2, 0xE2, 0x78, 0xFF},
	{123, 12, 110, 0, 901, 1866, 0x33, 0x32, 0x69, 0xFF},
	{119, 25, 97, 0, 899, 1851, 0x2C, 0x76, 0xF2, 0xFF},
	{112, -4, 81, 0, 895, 1885, 0xF6, 0x30, 0x8B, 0xFF},
	{169, -43, 41, 0, 928, 1930, 0xE6, 0xB8, 0x9A, 0xFF},
	{104, -52, 71, 0, 890, 1940, 0xE7, 0xA2, 0xAE, 0xFF},
	{20, -30, 88, 0, 840, 1903, 0xAF, 0xA5, 0x24, 0xFF},
	{11, 63, 104, 0, 831, 1797, 0xB4, 0xD, 0x65, 0xFF},
	{63, 40, 108, 0, 862, 1819, 0x24, 0x3B, 0x6B, 0xFF},
	{65, 47, 90, 0, 862, 1810, 0x5E, 0x45, 0xCD, 0xFF},
	{50, 11, 74, 0, 855, 1853, 0x1E, 0xD, 0x85, 0xFF},
	{26, -27, 69, 0, 843, 1900, 0xD4, 0xBC, 0x9E, 0xFF},
	{-7, 21, 71, 0, 822, 1847, 0x89, 0xEB, 0xD8, 0xFF},
	{4, 90, 79, 0, 826, 1766, 0xA9, 0x58, 0xE4, 0xFF},
	{29, 93, 104, 0, 840, 1760, 0xFD, 0x5A, 0x5A, 0xFF},
	{42, 94, 89, 0, 848, 1758, 0x48, 0x68, 0xF1, 0xFF},
	{28, 72, 61, 0, 840, 1785, 0x10, 0x28, 0x88, 0xFF},
	{10, 40, 65, 0, 831, 1823, 0xE4, 0x1, 0x84, 0xFF},
	{180, 43, 64, 0, 934, 1830, 0x41, 0x40, 0x58, 0xFF},
	{200, 25, 31, 0, 946, 1851, 0x64, 0x45, 0x27, 0xFF},
	{183, 61, 0, 0, 935, 1809, 0x47, 0x69, 0x3, 0xFF},
	{203, -6, 35, 0, 947, 1887, 0x76, 0xF9, 0x2F, 0xFF},
	{187, -44, 59, 0, 938, 1931, 0x48, 0xC8, 0x58, 0xFF},
	{110, -52, 78, 0, 893, 1941, 0xD, 0xBF, 0x6D, 0xFF},
	{95, 48, 76, 0, 885, 1824, 0xF, 0x2E, 0x76, 0xFF},
	{40, 26, 68, 0, 853, 1850, 0xCF, 0xC, 0x75, 0xFF},
	{74, 97, 60, 0, 871, 1768, 0x1D, 0x4F, 0x5F, 0xFF},
	{103, 108, 0, 0, 888, 1753, 0x60, 0x53, 0x0, 0xFF},
	{110, 80, 0, 0, 893, 1787, 0x5D, 0x57, 0x0, 0xFF},
	{95, 48, -76, 0, 885, 1824, 0xE, 0x2F, 0x8B, 0xFF},
	{74, 97, -60, 0, 871, 1768, 0x1D, 0x4F, 0xA0, 0xFF},
	{40, 26, -69, 0, 853, 1850, 0xCF, 0xC, 0x8B, 0xFF},
	{95, 48, -76, 0, 885, 1824, 0xE, 0x2F, 0x8B, 0xFF},
	{110, -52, -80, 0, 894, 1941, 0xC, 0xBF, 0x93, 0xFF},
	{40, 26, -69, 0, 853, 1850, 0xCF, 0xC, 0x8B, 0xFF},
	{180, 44, -64, 0, 934, 1830, 0x3D, 0x42, 0xA6, 0xFF},
	{188, -43, -61, 0, 938, 1930, 0x48, 0xC5, 0xA9, 0xFF},
	{202, 23, -40, 0, 946, 1854, 0x6E, 0x17, 0xC5, 0xFF},
	{196, 41, -20, 0, 943, 1833, 0x5F, 0x54, 0x2, 0xFF},
	{183, 61, 0, 0, 935, 1809, 0x47, 0x69, 0x3, 0xFF},
	{200, 25, 31, 0, 946, 1851, 0x64, 0x45, 0x27, 0xFF},
	{203, 8, 3, 0, 947, 1871, 0x77, 0x25, 0x17, 0xFF},
	{210, 15, 19, 0, 951, 1863, 0x6C, 0x1F, 0xC5, 0xFF},
	{216, 24, 34, 0, 955, 1852, 0x5B, 0x4A, 0x32, 0xFF},
	{203, -6, 35, 0, 947, 1887, 0x76, 0xF9, 0x2F, 0xFF},
	{205, -31, 20, 0, 949, 1916, 0x71, 0xE2, 0x33, 0xFF},
	{187, -44, 59, 0, 938, 1931, 0x48, 0xC8, 0x58, 0xFF},
	{186, -69, 13, 0, 937, 1960, 0x42, 0x94, 0x10, 0xFF},
	{117, -88, 0, 0, 898, 1982, 0x7, 0x81, 0x0, 0xFF},
	{110, -52, 78, 0, 893, 1941, 0xD, 0xBF, 0x6D, 0xFF},
	{50, -54, 77, 0, 858, 1943, 0xD2, 0xBD, 0x62, 0xFF},
	{40, 26, 68, 0, 853, 1850, 0xCF, 0xC, 0x75, 0xFF},
	{18, -18, 54, 0, 840, 1901, 0x95, 0xED, 0x42, 0xFF},
	{25, 97, 49, 0, 843, 1768, 0xB5, 0x41, 0x4F, 0xFF},
	{74, 97, 60, 0, 871, 1768, 0x1D, 0x4F, 0x5F, 0xFF},
	{3, -4, 0, 0, 831, 1885, 0x82, 0xF4, 0x0, 0xFF},
	{24, -65, 0, 0, 843, 1955, 0xAB, 0xA1, 0x0, 0xFF},
	{18, -18, -54, 0, 840, 1901, 0x95, 0xED, 0xBE, 0xFF},
	{25, 97, -49, 0, 843, 1768, 0xB5, 0x41, 0xB1, 0xFF},
	{12, 105, 0, 0, 835, 1759, 0x97, 0x48, 0x0, 0xFF},
	{49, -54, -78, 0, 858, 1942, 0xD1, 0xBE, 0x9E, 0xFF},
	{215, -33, 0, 0, 954, 1918, 0x6A, 0xB9, 0x0, 0xFF},
	{212, -19, -22, 0, 952, 1902, 0x72, 0xF4, 0xC9, 0xFF},
	{206, 21, -18, 0, 949, 1855, 0x79, 0x22, 0x15, 0xFF},
	{209, 45, -31, 0, 951, 1828, 0x40, 0x68, 0xDB, 0xFF},
	{214, -3, -4, 0, 954, 1884, 0x65, 0x4B, 0x13, 0xFF},
	{230, -10, 2, 0, 963, 1891, 0x73, 0x30, 0x1A, 0xFF},
	{74, 97, -60, 0, 871, 1768, 0x1D, 0x4F, 0xA0, 0xFF},
	{25, 97, -49, 0, 249, 2069, 0xB5, 0x41, 0xB1, 0xFF},
	{60, 128, 0, 0, 536, 1843, 0x1, 0x7F, 0x0, 0xFF},
	{74, 97, -60, 0, 177, 1749, 0x1D, 0x4F, 0xA0, 0xFF},
	{12, 105, 0, 0, 535, 2134, 0x97, 0x48, 0x0, 0xFF},
	{25, 97, 49, 0, 249, 2069, 0xB5, 0x41, 0x4F, 0xFF},
	{74, 97, 60, 0, 177, 1749, 0x1D, 0x4F, 0x5F, 0xFF},
	{103, 108, 0, 0, 546, 1508, 0x60, 0x53, 0x0, 0xFF},
};

Gfx mario_000_displaylist_Head_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_displaylist_Head_mesh_layer_1_vtx_1 + 0, 64, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(6, 10, 9, 0, 6, 11, 10, 0),
	gsSP2Triangles(12, 11, 6, 0, 12, 6, 13, 0),
	gsSP2Triangles(8, 13, 6, 0, 8, 14, 13, 0),
	gsSP2Triangles(13, 14, 15, 0, 15, 14, 16, 0),
	gsSP2Triangles(17, 16, 14, 0, 17, 14, 7, 0),
	gsSP2Triangles(7, 9, 17, 0, 18, 17, 9, 0),
	gsSP2Triangles(18, 9, 10, 0, 18, 10, 19, 0),
	gsSP2Triangles(19, 10, 20, 0, 11, 20, 10, 0),
	gsSP2Triangles(11, 21, 20, 0, 11, 12, 21, 0),
	gsSP2Triangles(21, 12, 22, 0, 22, 12, 23, 0),
	gsSP2Triangles(12, 15, 23, 0, 12, 13, 15, 0),
	gsSP2Triangles(15, 24, 23, 0, 15, 16, 24, 0),
	gsSP2Triangles(18, 24, 16, 0, 18, 16, 17, 0),
	gsSP2Triangles(24, 18, 19, 0, 24, 19, 25, 0),
	gsSP2Triangles(26, 25, 19, 0, 26, 19, 20, 0),
	gsSP2Triangles(20, 21, 26, 0, 26, 21, 22, 0),
	gsSP2Triangles(26, 22, 27, 0, 22, 23, 27, 0),
	gsSP2Triangles(27, 23, 24, 0, 25, 27, 24, 0),
	gsSP2Triangles(27, 25, 26, 0, 28, 29, 30, 0),
	gsSP2Triangles(29, 28, 31, 0, 32, 31, 28, 0),
	gsSP2Triangles(32, 28, 33, 0, 28, 30, 33, 0),
	gsSP2Triangles(34, 33, 30, 0, 35, 34, 30, 0),
	gsSP2Triangles(36, 35, 30, 0, 36, 37, 35, 0),
	gsSP2Triangles(37, 36, 29, 0, 37, 29, 31, 0),
	gsSP2Triangles(37, 31, 38, 0, 32, 38, 31, 0),
	gsSP2Triangles(32, 39, 38, 0, 40, 39, 32, 0),
	gsSP2Triangles(32, 33, 40, 0, 34, 40, 33, 0),
	gsSP2Triangles(34, 41, 40, 0, 42, 41, 34, 0),
	gsSP2Triangles(42, 34, 35, 0, 42, 35, 37, 0),
	gsSP2Triangles(42, 37, 43, 0, 37, 38, 43, 0),
	gsSP2Triangles(43, 38, 44, 0, 39, 44, 38, 0),
	gsSP2Triangles(45, 44, 39, 0, 45, 39, 46, 0),
	gsSP2Triangles(40, 46, 39, 0, 46, 40, 47, 0),
	gsSP2Triangles(47, 40, 41, 0, 48, 47, 41, 0),
	gsSP2Triangles(48, 41, 42, 0, 49, 48, 42, 0),
	gsSP2Triangles(43, 49, 42, 0, 43, 44, 49, 0),
	gsSP2Triangles(44, 45, 49, 0, 45, 48, 49, 0),
	gsSP2Triangles(45, 47, 48, 0, 47, 45, 46, 0),
	gsSP2Triangles(50, 51, 52, 0, 50, 53, 51, 0),
	gsSP2Triangles(50, 54, 53, 0, 50, 55, 54, 0),
	gsSP2Triangles(50, 56, 55, 0, 57, 55, 56, 0),
	gsSP2Triangles(57, 56, 58, 0, 56, 59, 58, 0),
	gsSP2Triangles(60, 59, 56, 0, 61, 59, 60, 0),
	gsSP2Triangles(62, 59, 61, 0, 63, 62, 61, 0),
	gsSPVertex(mario_000_displaylist_Head_mesh_layer_1_vtx_1 + 64, 43, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 4, 1, 0, 5, 4, 3, 0),
	gsSP2Triangles(6, 5, 3, 0, 6, 3, 7, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
	gsSP2Triangles(8, 10, 9, 0, 10, 8, 11, 0),
	gsSP2Triangles(8, 12, 11, 0, 12, 10, 11, 0),
	gsSP2Triangles(12, 9, 10, 0, 12, 13, 9, 0),
	gsSP2Triangles(14, 13, 12, 0, 14, 15, 13, 0),
	gsSP2Triangles(14, 16, 15, 0, 14, 17, 16, 0),
	gsSP2Triangles(17, 18, 16, 0, 17, 19, 18, 0),
	gsSP2Triangles(20, 18, 19, 0, 19, 21, 20, 0),
	gsSP2Triangles(21, 19, 22, 0, 23, 20, 21, 0),
	gsSP2Triangles(24, 20, 23, 0, 25, 24, 23, 0),
	gsSP2Triangles(26, 25, 23, 0, 26, 23, 27, 0),
	gsSP2Triangles(23, 21, 27, 0, 2, 25, 26, 0),
	gsSP2Triangles(28, 25, 2, 0, 2, 1, 28, 0),
	gsSP2Triangles(1, 16, 28, 0, 16, 1, 4, 0),
	gsSP2Triangles(16, 4, 15, 0, 15, 4, 29, 0),
	gsSP2Triangles(29, 4, 30, 0, 5, 30, 4, 0),
	gsSP2Triangles(30, 5, 31, 0, 31, 5, 32, 0),
	gsSP2Triangles(5, 6, 32, 0, 6, 31, 32, 0),
	gsSP2Triangles(6, 9, 31, 0, 31, 9, 33, 0),
	gsSP2Triangles(13, 33, 9, 0, 13, 34, 33, 0),
	gsSP2Triangles(34, 13, 29, 0, 29, 13, 15, 0),
	gsSP2Triangles(29, 30, 34, 0, 30, 33, 34, 0),
	gsSP2Triangles(30, 31, 33, 0, 26, 35, 2, 0),
	gsSP2Triangles(24, 18, 20, 0, 16, 18, 24, 0),
	gsSP2Triangles(16, 24, 28, 0, 25, 28, 24, 0),
	gsSP2Triangles(36, 37, 38, 0, 36, 39, 37, 0),
	gsSP2Triangles(40, 37, 39, 0, 40, 41, 37, 0),
	gsSP2Triangles(37, 41, 42, 0, 37, 42, 38, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_001_RWing_mesh_layer_4_vtx_0[3] = {
	{-164, -12, 28, 0, -509, 2059, 0xEA, 0x0, 0x83, 0xFF},
	{11, 358, -2, 0, 1061, -1152, 0xEA, 0x0, 0x83, 0xFF},
	{200, -4, -37, 0, 2903, 1940, 0xEA, 0x0, 0x83, 0xFF},
};

Gfx mario_000_displaylist_001_RWing_mesh_layer_4_tri_0[] = {
	gsSPVertex(mario_000_displaylist_001_RWing_mesh_layer_4_vtx_0 + 0, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_002_LWing_mesh_layer_4_vtx_0[3] = {
	{-164, -12, -28, 0, -509, 2059, 0xEA, 0x0, 0x7D, 0xFF},
	{200, -4, 37, 0, 2903, 1940, 0xEA, 0x0, 0x7D, 0xFF},
	{11, 358, 2, 0, 1061, -1152, 0xEA, 0x0, 0x7D, 0xFF},
};

Gfx mario_000_displaylist_002_LWing_mesh_layer_4_tri_0[] = {
	gsSPVertex(mario_000_displaylist_002_LWing_mesh_layer_4_vtx_0 + 0, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_003_LShoulder_mesh_layer_1_vtx_0[13] = {
	{-9, -10, 22, 0, 7, -2275, 0xCC, 0xD2, 0x6B, 0xFF},
	{81, -9, 18, 0, 65, -523, 0x4, 0xC9, 0x72, 0xFF},
	{88, 27, 15, 0, 119, -524, 0xFE, 0x4D, 0x65, 0xFF},
	{67, -28, -10, 0, 494, -522, 0x5, 0x83, 0x15, 0xFF},
	{-12, -32, -10, 0, 496, -2333, 0xC3, 0x91, 0xD, 0xFF},
	{-30, 4, -10, 0, 504, -2663, 0x81, 0x0, 0x0, 0xFF},
	{-6, 31, 18, 0, 67, -2220, 0xD2, 0x4B, 0x5C, 0xFF},
	{78, 34, -10, 0, 494, -708, 0xF9, 0x7D, 0xEC, 0xFF},
	{-12, 39, -10, 0, 496, -2333, 0xC3, 0x6F, 0xF3, 0xFF},
	{-9, 17, -41, 0, 982, -2280, 0xCC, 0x2E, 0x95, 0xFF},
	{88, 16, -37, 0, 922, -525, 0x0, 0x32, 0x8B, 0xFF},
	{-6, -24, -37, 0, 920, -2225, 0xD2, 0xB5, 0xA4, 0xFF},
	{81, -21, -34, 0, 868, -527, 0x5, 0xAE, 0xA0, 0xFF},
};

Gfx mario_000_offset_003_LShoulder_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_003_LShoulder_mesh_layer_1_vtx_0 + 0, 13, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 0, 4, 0, 5, 4, 0, 0),
	gsSP2Triangles(6, 5, 0, 0, 0, 2, 6, 0),
	gsSP2Triangles(6, 2, 7, 0, 6, 7, 8, 0),
	gsSP2Triangles(7, 9, 8, 0, 7, 10, 9, 0),
	gsSP2Triangles(10, 11, 9, 0, 10, 12, 11, 0),
	gsSP2Triangles(11, 12, 3, 0, 11, 3, 4, 0),
	gsSP2Triangles(5, 11, 4, 0, 5, 9, 11, 0),
	gsSP2Triangles(9, 5, 8, 0, 6, 8, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_004_LArm_skinned_mesh_layer_1_vtx_0[6] = {
	{88, 27, 15, 0, 119, -524, 0xFE, 0x4D, 0x65, 0xFF},
	{81, -21, -34, 0, 868, -527, 0x5, 0xAE, 0xA0, 0xFF},
	{88, 16, -37, 0, 922, -525, 0x0, 0x32, 0x8B, 0xFF},
	{81, -9, 18, 0, 65, -523, 0x4, 0xC9, 0x72, 0xFF},
	{67, -28, -10, 0, 494, -522, 0x5, 0x83, 0x15, 0xFF},
	{78, 34, -10, 0, 494, -708, 0xF9, 0x7D, 0xEC, 0xFF},
};

Gfx mario_000_offset_004_LArm_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_004_LArm_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_004_LArm_mesh_layer_1_vtx_0[6] = {
	{89, -21, -33, 0, 868, 1120, 0xF5, 0xB0, 0x9E, 0xFF},
	{92, 16, -37, 0, 921, 1182, 0xF2, 0x37, 0x8E, 0xFF},
	{9, 34, -10, 0, 494, -336, 0xF3, 0x7D, 0xEF, 0xFF},
	{89, 28, 15, 0, 119, 1125, 0xF1, 0x51, 0x61, 0xFF},
	{93, -9, 18, 0, 64, 1188, 0xF4, 0xCB, 0x73, 0xFF},
	{96, -28, -9, 0, 491, 1247, 0xF4, 0x84, 0x17, 0xFF},
};

Gfx mario_000_offset_004_LArm_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_004_LArm_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(2, 6, 1, 0, 2, 7, 6, 0),
	gsSP2Triangles(8, 7, 2, 0, 5, 8, 2, 0),
	gsSP2Triangles(0, 8, 5, 0, 9, 8, 0, 0),
	gsSP2Triangles(10, 9, 0, 0, 10, 0, 3, 0),
	gsSP2Triangles(3, 11, 10, 0, 4, 11, 3, 0),
	gsSP2Triangles(1, 11, 4, 0, 6, 11, 1, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_004_LArm_mesh_layer_1_vtx_1[14] = {
	{89, 28, 15, 0, 119, 1125, 0xF1, 0x51, 0x61, 0xFF},
	{96, 34, -9, 0, 491, 1247, 0xF1, 0x7C, 0xEA, 0xFF},
	{9, 34, -10, 0, 494, -336, 0xF3, 0x7D, 0xEF, 0xFF},
	{105, 30, 17, 0, 77, 1406, 0x50, 0x3B, 0x4F, 0xFF},
	{93, -9, 18, 0, 64, 1188, 0xF4, 0xCB, 0x73, 0xFF},
	{109, -10, 21, 0, 16, 1476, 0x5E, 0xE3, 0x50, 0xFF},
	{96, -28, -9, 0, 491, 1247, 0xF4, 0x84, 0x17, 0xFF},
	{112, -31, -9, 0, 492, 1542, 0x67, 0xB6, 0x6, 0xFF},
	{104, -23, -36, 0, 911, 1400, 0x50, 0xC5, 0xB0, 0xFF},
	{89, -21, -33, 0, 868, 1120, 0xF5, 0xB0, 0x9E, 0xFF},
	{92, 16, -37, 0, 921, 1182, 0xF2, 0x37, 0x8E, 0xFF},
	{108, 17, -40, 0, 970, 1469, 0x5E, 0x1F, 0xB0, 0xFF},
	{112, 38, -9, 0, 492, 1542, 0x67, 0x4A, 0xFA, 0xFF},
	{78, 4, -9, 0, 492, 915, 0x7F, 0x0, 0x0, 0xFF},
};

Gfx mario_000_offset_004_LArm_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_offset_004_LArm_mesh_layer_1_vtx_1 + 0, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 8, 7, 0, 6, 9, 8, 0),
	gsSP2Triangles(10, 8, 9, 0, 10, 11, 8, 0),
	gsSP2Triangles(1, 11, 10, 0, 2, 1, 10, 0),
	gsSP2Triangles(1, 12, 11, 0, 1, 3, 12, 0),
	gsSP2Triangles(3, 13, 12, 0, 5, 13, 3, 0),
	gsSP2Triangles(7, 13, 5, 0, 8, 13, 7, 0),
	gsSP2Triangles(11, 13, 8, 0, 12, 13, 11, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_003_LHand_skinned_mesh_layer_1_vtx_0[4] = {
	{90, 5, -4, 0, 276, 968, 0x8A, 0xDA, 0xE5, 0xFF},
	{90, 5, -4, 0, 297, 326, 0x8A, 0xDA, 0xE5, 0xFF},
	{90, 5, -4, 0, 333, 998, 0x8A, 0xDA, 0xE5, 0xFF},
	{90, 5, -4, 0, 973, 473, 0x8A, 0xDA, 0xE5, 0xFF},
};

Gfx mario_000_displaylist_003_LHand_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_displaylist_003_LHand_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_003_LHand_mesh_layer_1_vtx_0[9] = {
	{8, -13, 7, 0, 223, 926, 0x3, 0x8C, 0x34, 0xFF},
	{5, -14, -21, 0, 328, 1010, 0xAF, 0x9E, 0x0, 0xFF},
	{-9, 20, -22, 0, 432, 1002, 0x97, 0x42, 0xE3, 0xFF},
	{-7, 24, 4, 0, 233, 994, 0xA2, 0x55, 0x0, 0xFF},
	{5, -14, -21, 0, 994, 591, 0xAF, 0x9E, 0x0, 0xFF},
	{-9, 20, -22, 0, 952, 356, 0x97, 0x42, 0xE3, 0xFF},
	{2, 7, 14, 0, 293, 248, 0xDE, 0xA, 0x7A, 0xFF},
	{8, -13, 7, 0, 293, 587, 0x3, 0x8C, 0x34, 0xFF},
	{-7, 24, 4, 0, 301, 65, 0xA2, 0x55, 0x0, 0xFF},
};

Gfx mario_000_displaylist_003_LHand_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_displaylist_003_LHand_mesh_layer_1_vtx_0 + 0, 9, 4),
	gsSP2Triangles(4, 0, 5, 0, 6, 2, 7, 0),
	gsSP2Triangles(8, 3, 9, 0, 10, 1, 11, 0),
	gsSP1Triangle(12, 1, 10, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_003_LHand_mesh_layer_1_vtx_1[31] = {
	{35, 51, 13, 0, 537, -3, 0x20, 0x65, 0x46, 0xFF},
	{48, 22, 18, 0, 496, 471, 0x33, 0x23, 0x6F, 0xFF},
	{46, 51, -10, 0, 667, 55, 0x4E, 0x61, 0xE8, 0xFF},
	{46, 51, -10, 0, 460, 497, 0x4E, 0x61, 0xE8, 0xFF},
	{19, 39, -30, 0, 525, 830, 0xED, 0x60, 0xAF, 0xFF},
	{35, 51, 13, 0, 278, 595, 0x20, 0x65, 0x46, 0xFF},
	{10, 40, 8, 0, 231, 890, 0xC8, 0x67, 0x31, 0xFF},
	{-9, 20, -22, 0, 432, 1002, 0x97, 0x42, 0xE3, 0xFF},
	{-7, 24, 4, 0, 233, 994, 0xA2, 0x55, 0x0, 0xFF},
	{5, -14, -21, 0, 994, 591, 0xAF, 0x9E, 0x0, 0xFF},
	{-9, 20, -22, 0, 952, 356, 0x97, 0x42, 0xE3, 0xFF},
	{19, -8, -35, 0, 925, 723, 0xE0, 0xD0, 0x8F, 0xFF},
	{19, 39, -30, 0, 834, 25, 0xED, 0x60, 0xAF, 0xFF},
	{45, 3, -34, 0, 782, 635, 0x30, 0xF4, 0x8B, 0xFF},
	{46, 51, -10, 0, 680, 56, 0x4E, 0x61, 0xE8, 0xFF},
	{69, 3, -17, 0, 681, 795, 0x75, 0xDE, 0xDB, 0xFF},
	{56, 0, 14, 0, 498, 810, 0x53, 0xD2, 0x55, 0xFF},
	{8, -13, 7, 0, 293, 587, 0x3, 0x8C, 0x34, 0xFF},
	{56, 0, 14, 0, 457, 575, 0x53, 0xD2, 0x55, 0xFF},
	{2, 7, 14, 0, 293, 248, 0xDE, 0xA, 0x7A, 0xFF},
	{48, 22, 18, 0, 517, 336, 0x33, 0x23, 0x6F, 0xFF},
	{35, 51, 13, 0, 500, 45, 0x20, 0x65, 0x46, 0xFF},
	{10, 40, 8, 0, 378, 53, 0xC8, 0x67, 0x31, 0xFF},
	{-7, 24, 4, 0, 301, 65, 0xA2, 0x55, 0x0, 0xFF},
	{27, -16, -25, 0, 459, 882, 0x17, 0x87, 0xE1, 0xFF},
	{19, -8, -35, 0, 593, 918, 0xE0, 0xD0, 0x8F, 0xFF},
	{45, 3, -34, 0, 558, 781, 0x30, 0xF4, 0x8B, 0xFF},
	{5, -14, -21, 0, 328, 1010, 0xAF, 0x9E, 0x0, 0xFF},
	{8, -13, 7, 0, 223, 926, 0x3, 0x8C, 0x34, 0xFF},
	{56, 0, 14, 0, 240, 697, 0x53, 0xD2, 0x55, 0xFF},
	{69, 3, -17, 0, 434, 555, 0x75, 0xDE, 0xDB, 0xFF},
};

Gfx mario_000_displaylist_003_LHand_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_displaylist_003_LHand_mesh_layer_1_vtx_1 + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 6, 4, 7, 0),
	gsSP2Triangles(8, 6, 7, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 11, 10, 0, 11, 12, 13, 0),
	gsSP2Triangles(13, 12, 14, 0, 14, 15, 13, 0),
	gsSP2Triangles(14, 1, 15, 0, 1, 16, 15, 0),
	gsSP2Triangles(17, 18, 19, 0, 19, 18, 20, 0),
	gsSP2Triangles(20, 21, 19, 0, 21, 22, 19, 0),
	gsSP2Triangles(23, 19, 22, 0, 24, 25, 26, 0),
	gsSP2Triangles(25, 24, 27, 0, 27, 24, 28, 0),
	gsSP2Triangles(24, 29, 28, 0, 30, 29, 24, 0),
	gsSP1Triangle(26, 30, 24, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_layer_1_vtx_0[50] = {
	{82, -19, -39, 0, 521, 68, 0x65, 0xDD, 0xBB, 0xFF},
	{67, -4, -30, 0, 521, 68, 0x5, 0x23, 0x86, 0xFF},
	{82, -8, -13, 0, 518, 40, 0x59, 0xB8, 0x38, 0xFF},
	{106, 19, -33, 0, 668, 53, 0x7A, 0xE1, 0x10, 0xFF},
	{75, 32, 6, 0, 561, 403, 0x3F, 0x17, 0x6C, 0xFF},
	{104, 55, -38, 0, 693, 362, 0x67, 0x4B, 0x4, 0xFF},
	{97, 51, -51, 0, 693, 362, 0x2D, 0x26, 0x8F, 0xFF},
	{101, 16, -46, 0, 668, 53, 0x3A, 0xC9, 0x9D, 0xFF},
	{82, -8, -13, 0, 357, 301, 0x59, 0xB8, 0x38, 0xFF},
	{75, 32, 6, 0, 368, 397, 0x3F, 0x17, 0x6C, 0xFF},
	{17, 1, 18, 0, 336, 450, 0xDD, 0xF0, 0x79, 0xFF},
	{34, 26, 13, 0, 361, 452, 0xEF, 0x23, 0x79, 0xFF},
	{9, 18, 2, 0, 355, 493, 0x9B, 0x43, 0x26, 0xFF},
	{0, -8, -1, 0, 346, 441, 0x8D, 0xCC, 0xE, 0xFF},
	{9, 11, -21, 0, 355, 486, 0xAE, 0x18, 0xA2, 0xFF},
	{38, 43, -22, 0, 357, 492, 0xA9, 0x3E, 0xBB, 0xFF},
	{40, 44, 8, 0, 373, 493, 0xDE, 0x5A, 0x53, 0xFF},
	{75, 32, 6, 0, 413, 415, 0x3F, 0x17, 0x6C, 0xFF},
	{40, 44, 8, 0, 415, 456, 0xDE, 0x5A, 0x53, 0xFF},
	{34, 26, 13, 0, 410, 439, 0xEF, 0x23, 0x79, 0xFF},
	{9, 18, 2, 0, 408, 456, 0x9B, 0x43, 0x26, 0xFF},
	{40, 44, 8, 0, 582, 767, 0xDE, 0x5A, 0x53, 0xFF},
	{69, 69, -29, 0, 661, 766, 0x0, 0x7D, 0x17, 0xFF},
	{104, 55, -38, 0, 690, 341, 0x67, 0x4B, 0x4, 0xFF},
	{64, 65, -43, 0, 661, 766, 0xCE, 0x4D, 0xA8, 0xFF},
	{97, 51, -51, 0, 690, 341, 0x2D, 0x26, 0x8F, 0xFF},
	{38, 43, -22, 0, 515, 767, 0xA9, 0x3E, 0xBB, 0xFF},
	{19, -12, -19, 0, 354, 398, 0xC9, 0xB6, 0xA9, 0xFF},
	{9, 11, -21, 0, 355, 460, 0xAE, 0x18, 0xA2, 0xFF},
	{38, 43, -22, 0, 357, 467, 0xA9, 0x3E, 0xBB, 0xFF},
	{67, -4, -30, 0, 358, 308, 0x5, 0x23, 0x86, 0xFF},
	{65, -13, -43, 0, 355, 306, 0xFB, 0x26, 0x87, 0xFF},
	{82, -19, -39, 0, 356, 250, 0x65, 0xDD, 0xBB, 0xFF},
	{60, -23, -38, 0, 356, 247, 0xE5, 0x9C, 0xB6, 0xFF},
	{82, -19, -39, 0, 356, 247, 0x65, 0xDD, 0xBB, 0xFF},
	{24, -18, 5, 0, 507, 373, 0xF4, 0x92, 0x3E, 0xFF},
	{19, -12, -19, 0, 507, 407, 0xC9, 0xB6, 0xA9, 0xFF},
	{60, -23, -38, 0, 514, -164, 0xE5, 0x9C, 0xB6, 0xFF},
	{0, -8, -1, 0, 507, 390, 0x8D, 0xCC, 0xE, 0xFF},
	{82, -8, -13, 0, 181, 262, 0x59, 0xB8, 0x38, 0xFF},
	{67, -4, -30, 0, 184, 289, 0x5, 0x23, 0x86, 0xFF},
	{101, 16, -46, 0, 166, 490, 0x3A, 0xC9, 0x9D, 0xFF},
	{106, 19, -33, 0, 166, 490, 0x7A, 0xE1, 0x10, 0xFF},
	{17, 1, 18, 0, 355, 470, 0xDD, 0xF0, 0x79, 0xFF},
	{24, -18, 5, 0, 354, 389, 0xF4, 0x92, 0x3E, 0xFF},
	{68, -24, -25, 0, 356, 267, 0x1E, 0x88, 0x1E, 0xFF},
	{82, -19, -39, 0, 357, 301, 0x65, 0xDD, 0xBB, 0xFF},
	{38, 43, -22, 0, 166, 490, 0xA9, 0x3E, 0xBB, 0xFF},
	{64, 65, -43, 0, 166, 490, 0xCE, 0x4D, 0xA8, 0xFF},
	{69, 69, -29, 0, 395, 493, 0x0, 0x7D, 0x17, 0xFF},
};

Gfx mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_layer_1_vtx_0 + 0, 50, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
	gsSP2Triangles(3, 5, 4, 0, 3, 6, 5, 0),
	gsSP2Triangles(3, 7, 6, 0, 8, 9, 10, 0),
	gsSP2Triangles(11, 10, 9, 0, 10, 11, 12, 0),
	gsSP2Triangles(12, 13, 10, 0, 14, 13, 12, 0),
	gsSP2Triangles(12, 15, 14, 0, 16, 15, 12, 0),
	gsSP2Triangles(17, 18, 19, 0, 19, 18, 20, 0),
	gsSP2Triangles(21, 4, 22, 0, 23, 22, 4, 0),
	gsSP2Triangles(23, 24, 22, 0, 23, 25, 24, 0),
	gsSP2Triangles(25, 1, 24, 0, 7, 1, 25, 0),
	gsSP2Triangles(1, 26, 24, 0, 27, 13, 28, 0),
	gsSP2Triangles(28, 29, 27, 0, 27, 29, 30, 0),
	gsSP2Triangles(30, 31, 27, 0, 31, 30, 32, 0),
	gsSP2Triangles(27, 31, 33, 0, 33, 31, 34, 0),
	gsSP2Triangles(35, 36, 37, 0, 35, 38, 36, 0),
	gsSP2Triangles(39, 40, 41, 0, 42, 39, 41, 0),
	gsSP2Triangles(43, 13, 44, 0, 44, 8, 43, 0),
	gsSP2Triangles(8, 44, 45, 0, 45, 44, 33, 0),
	gsSP2Triangles(33, 46, 45, 0, 45, 46, 8, 0),
	gsSP2Triangles(47, 16, 48, 0, 16, 49, 48, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_006_Rshoulder_mesh_layer_1_vtx_0[13] = {
	{-9, -10, -21, 0, 7, -2275, 0xCC, 0xD2, 0x95, 0xFF},
	{88, 27, -13, 0, 119, -524, 0xFE, 0x4D, 0x9B, 0xFF},
	{82, -9, -17, 0, 65, -523, 0x3, 0xC9, 0x8D, 0xFF},
	{-6, 31, -17, 0, 67, -2220, 0xD2, 0x4A, 0xA4, 0xFF},
	{-30, 4, 11, 0, 504, -2663, 0x81, 0x0, 0x0, 0xFF},
	{-12, -32, 11, 0, 496, -2333, 0xC3, 0x91, 0xF3, 0xFF},
	{67, -28, 11, 0, 494, -522, 0x5, 0x83, 0xEC, 0xFF},
	{-6, -24, 38, 0, 920, -2225, 0xD2, 0xB6, 0x5C, 0xFF},
	{-9, 17, 42, 0, 982, -2280, 0xCD, 0x2F, 0x6B, 0xFF},
	{88, 15, 38, 0, 922, -525, 0x0, 0x33, 0x74, 0xFF},
	{81, -21, 35, 0, 868, -527, 0x4, 0xAD, 0x60, 0xFF},
	{78, 34, 11, 0, 494, -708, 0xFA, 0x7D, 0x14, 0xFF},
	{-12, 39, 11, 0, 496, -2333, 0xC3, 0x6F, 0xC, 0xFF},
};

Gfx mario_000_offset_006_Rshoulder_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_006_Rshoulder_mesh_layer_1_vtx_0 + 0, 13, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 4, 0, 5, 0),
	gsSP2Triangles(6, 5, 0, 0, 6, 0, 2, 0),
	gsSP2Triangles(7, 5, 6, 0, 4, 5, 7, 0),
	gsSP2Triangles(4, 7, 8, 0, 9, 8, 7, 0),
	gsSP2Triangles(9, 7, 10, 0, 7, 6, 10, 0),
	gsSP2Triangles(11, 8, 9, 0, 11, 12, 8, 0),
	gsSP2Triangles(3, 12, 11, 0, 3, 11, 1, 0),
	gsSP2Triangles(3, 4, 12, 0, 8, 12, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_007_RArm_skinned_mesh_layer_1_vtx_0[6] = {
	{88, 27, -13, 0, 119, -524, 0xFE, 0x4D, 0x9B, 0xFF},
	{81, -21, 35, 0, 868, -527, 0x4, 0xAD, 0x60, 0xFF},
	{88, 15, 38, 0, 922, -525, 0x0, 0x33, 0x74, 0xFF},
	{82, -9, -17, 0, 65, -523, 0x3, 0xC9, 0x8D, 0xFF},
	{67, -28, 11, 0, 494, -522, 0x5, 0x83, 0xEC, 0xFF},
	{78, 34, 11, 0, 494, -708, 0xFA, 0x7D, 0x14, 0xFF},
};

Gfx mario_000_offset_007_RArm_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_007_RArm_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_007_RArm_mesh_layer_1_vtx_0[6] = {
	{89, -21, 35, 0, 868, 1120, 0xF4, 0xB0, 0x62, 0xFF},
	{96, -28, 10, 0, 491, 1247, 0xF3, 0x84, 0xEA, 0xFF},
	{93, -9, -17, 0, 64, 1188, 0xF4, 0xCB, 0x8D, 0xFF},
	{90, 27, -14, 0, 119, 1125, 0xF2, 0x51, 0x9F, 0xFF},
	{9, 34, 11, 0, 494, -336, 0xF4, 0x7D, 0x10, 0xFF},
	{93, 15, 38, 0, 921, 1182, 0xF2, 0x37, 0x72, 0xFF},
};

Gfx mario_000_offset_007_RArm_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_007_RArm_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(2, 1, 6, 0, 6, 1, 7, 0),
	gsSP2Triangles(7, 1, 4, 0, 4, 3, 7, 0),
	gsSP2Triangles(7, 3, 8, 0, 8, 3, 0, 0),
	gsSP2Triangles(8, 0, 9, 0, 9, 0, 10, 0),
	gsSP2Triangles(0, 5, 10, 0, 5, 2, 10, 0),
	gsSP2Triangles(10, 2, 11, 0, 2, 6, 11, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_007_RArm_mesh_layer_1_vtx_1[14] = {
	{90, 27, -14, 0, 119, 1125, 0xF2, 0x51, 0x9F, 0xFF},
	{9, 34, 11, 0, 494, -336, 0xF4, 0x7D, 0x10, 0xFF},
	{96, 34, 10, 0, 491, 1247, 0xF1, 0x7C, 0x15, 0xFF},
	{93, 15, 38, 0, 921, 1182, 0xF2, 0x37, 0x72, 0xFF},
	{109, 17, 41, 0, 970, 1469, 0x5E, 0x1F, 0x50, 0xFF},
	{105, -24, 37, 0, 911, 1400, 0x50, 0xC5, 0x50, 0xFF},
	{89, -21, 35, 0, 868, 1120, 0xF4, 0xB0, 0x62, 0xFF},
	{96, -28, 10, 0, 491, 1247, 0xF3, 0x84, 0xEA, 0xFF},
	{113, -31, 10, 0, 492, 1542, 0x67, 0xB6, 0xFA, 0xFF},
	{109, -10, -20, 0, 16, 1476, 0x5E, 0xE2, 0xB0, 0xFF},
	{93, -9, -17, 0, 64, 1188, 0xF4, 0xCB, 0x8D, 0xFF},
	{105, 30, -16, 0, 77, 1406, 0x50, 0x3B, 0xB1, 0xFF},
	{113, 38, 10, 0, 492, 1542, 0x67, 0x4A, 0x6, 0xFF},
	{78, 3, 10, 0, 492, 915, 0x7F, 0x0, 0x0, 0xFF},
};

Gfx mario_000_offset_007_RArm_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_offset_007_RArm_mesh_layer_1_vtx_1 + 0, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(2, 3, 4, 0, 3, 5, 4, 0),
	gsSP2Triangles(3, 6, 5, 0, 7, 5, 6, 0),
	gsSP2Triangles(7, 8, 5, 0, 7, 9, 8, 0),
	gsSP2Triangles(7, 10, 9, 0, 10, 11, 9, 0),
	gsSP2Triangles(10, 0, 11, 0, 2, 11, 0, 0),
	gsSP2Triangles(2, 12, 11, 0, 2, 4, 12, 0),
	gsSP2Triangles(12, 4, 13, 0, 4, 5, 13, 0),
	gsSP2Triangles(5, 8, 13, 0, 8, 9, 13, 0),
	gsSP2Triangles(9, 11, 13, 0, 11, 12, 13, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_004_Rhand_skinned_mesh_layer_1_vtx_0[4] = {
	{90, 5, 5, 0, 297, 326, 0x91, 0xF1, 0xC4, 0xFF},
	{90, 5, 5, 0, 276, 968, 0x91, 0xF1, 0xC4, 0xFF},
	{90, 5, 5, 0, 333, 998, 0x91, 0xF1, 0xC4, 0xFF},
	{90, 5, 5, 0, 973, 473, 0x91, 0xF1, 0xC4, 0xFF},
};

Gfx mario_000_displaylist_004_Rhand_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_displaylist_004_Rhand_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_004_Rhand_mesh_layer_1_vtx_0[9] = {
	{8, -13, -6, 0, 223, 926, 0xBB, 0x9B, 0xDD, 0xFF},
	{5, -14, 22, 0, 328, 1010, 0xD9, 0x89, 0x15, 0xFF},
	{-9, 20, 24, 0, 432, 1002, 0xBB, 0x3A, 0x59, 0xFF},
	{-7, 25, -3, 0, 233, 994, 0xB4, 0x64, 0xEC, 0xFF},
	{5, -14, 22, 0, 994, 591, 0xD9, 0x89, 0x15, 0xFF},
	{-9, 20, 24, 0, 952, 356, 0xBB, 0x3A, 0x59, 0xFF},
	{-7, 25, -3, 0, 301, 65, 0xB4, 0x64, 0xEC, 0xFF},
	{2, 7, -13, 0, 293, 248, 0xA4, 0xF9, 0xA9, 0xFF},
	{8, -13, -6, 0, 293, 587, 0xBB, 0x9B, 0xDD, 0xFF},
};

Gfx mario_000_displaylist_004_Rhand_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_displaylist_004_Rhand_mesh_layer_1_vtx_0 + 0, 9, 4),
	gsSP2Triangles(4, 5, 1, 0, 6, 7, 2, 0),
	gsSP2Triangles(8, 9, 3, 0, 10, 11, 0, 0),
	gsSP1Triangle(11, 12, 0, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_004_Rhand_mesh_layer_1_vtx_1[31] = {
	{35, 51, -12, 0, 537, -3, 0xFD, 0x5F, 0xAC, 0xFF},
	{46, 51, 11, 0, 667, 55, 0x4C, 0x5F, 0x25, 0xFF},
	{48, 22, -18, 0, 496, 471, 0x3F, 0x9, 0x92, 0xFF},
	{-7, 25, -3, 0, 301, 65, 0xB4, 0x64, 0xEC, 0xFF},
	{11, 40, -7, 0, 378, 53, 0xB1, 0x5A, 0xD5, 0xFF},
	{2, 7, -13, 0, 293, 248, 0xA4, 0xF9, 0xA9, 0xFF},
	{35, 51, -12, 0, 500, 45, 0xFD, 0x5F, 0xAC, 0xFF},
	{48, 22, -18, 0, 517, 336, 0x3F, 0x9, 0x92, 0xFF},
	{57, 0, -13, 0, 457, 575, 0x3F, 0xC2, 0xA5, 0xFF},
	{8, -13, -6, 0, 293, 587, 0xBB, 0x9B, 0xDD, 0xFF},
	{70, 3, 18, 0, 681, 795, 0x78, 0xE2, 0x1B, 0xFF},
	{57, 0, -13, 0, 498, 810, 0x3F, 0xC2, 0xA5, 0xFF},
	{46, 51, 11, 0, 680, 56, 0x4C, 0x5F, 0x25, 0xFF},
	{46, 3, 35, 0, 782, 635, 0x38, 0xEA, 0x70, 0xFF},
	{19, 39, 31, 0, 834, 25, 0xD7, 0x54, 0x56, 0xFF},
	{19, -8, 36, 0, 925, 723, 0xE1, 0xD3, 0x73, 0xFF},
	{-9, 20, 24, 0, 952, 356, 0xBB, 0x3A, 0x59, 0xFF},
	{5, -14, 22, 0, 994, 591, 0xD9, 0x89, 0x15, 0xFF},
	{46, 51, 11, 0, 460, 497, 0x4C, 0x5F, 0x25, 0xFF},
	{35, 51, -12, 0, 278, 595, 0xFD, 0x5F, 0xAC, 0xFF},
	{19, 39, 31, 0, 525, 830, 0xD7, 0x54, 0x56, 0xFF},
	{11, 40, -7, 0, 231, 890, 0xB1, 0x5A, 0xD5, 0xFF},
	{-9, 20, 24, 0, 432, 1002, 0xBB, 0x3A, 0x59, 0xFF},
	{-7, 25, -3, 0, 233, 994, 0xB4, 0x64, 0xEC, 0xFF},
	{5, -14, 22, 0, 328, 1010, 0xD9, 0x89, 0x15, 0xFF},
	{8, -13, -6, 0, 223, 926, 0xBB, 0x9B, 0xDD, 0xFF},
	{27, -16, 25, 0, 459, 882, 0xE, 0x89, 0x2A, 0xFF},
	{57, 0, -13, 0, 240, 697, 0x3F, 0xC2, 0xA5, 0xFF},
	{70, 3, 18, 0, 434, 555, 0x78, 0xE2, 0x1B, 0xFF},
	{46, 3, 35, 0, 558, 781, 0x38, 0xEA, 0x70, 0xFF},
	{19, -8, 36, 0, 593, 918, 0xE1, 0xD3, 0x73, 0xFF},
};

Gfx mario_000_displaylist_004_Rhand_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_displaylist_004_Rhand_mesh_layer_1_vtx_1 + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 5, 4, 0, 7, 5, 6, 0),
	gsSP2Triangles(5, 7, 8, 0, 9, 5, 8, 0),
	gsSP2Triangles(2, 10, 11, 0, 12, 10, 2, 0),
	gsSP2Triangles(12, 13, 10, 0, 13, 12, 14, 0),
	gsSP2Triangles(15, 13, 14, 0, 14, 16, 15, 0),
	gsSP2Triangles(17, 15, 16, 0, 18, 19, 20, 0),
	gsSP2Triangles(19, 21, 20, 0, 21, 22, 20, 0),
	gsSP2Triangles(23, 22, 21, 0, 24, 25, 26, 0),
	gsSP2Triangles(26, 25, 27, 0, 28, 26, 27, 0),
	gsSP2Triangles(29, 26, 28, 0, 26, 29, 30, 0),
	gsSP1Triangle(30, 24, 26, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_layer_1_vtx_0[50] = {
	{74, -19, 40, 0, 521, 68, 0x65, 0xDD, 0x45, 0xFF},
	{74, -8, 14, 0, 518, 40, 0x59, 0xB8, 0xC8, 0xFF},
	{59, -4, 30, 0, 521, 68, 0x5, 0x23, 0x7A, 0xFF},
	{68, 32, -5, 0, 561, 403, 0x3F, 0x17, 0x94, 0xFF},
	{99, 19, 34, 0, 668, 53, 0x7A, 0xE1, 0xF0, 0xFF},
	{96, 55, 39, 0, 693, 362, 0x67, 0x4B, 0xFC, 0xFF},
	{89, 51, 52, 0, 693, 362, 0x2D, 0x26, 0x71, 0xFF},
	{94, 16, 47, 0, 668, 53, 0x3A, 0xC9, 0x63, 0xFF},
	{74, -8, 14, 0, 357, 301, 0x59, 0xB8, 0xC8, 0xFF},
	{9, 1, -17, 0, 336, 450, 0xDD, 0xF0, 0x87, 0xFF},
	{68, 32, -5, 0, 368, 397, 0x3F, 0x17, 0x94, 0xFF},
	{26, 26, -13, 0, 361, 452, 0xEF, 0x23, 0x87, 0xFF},
	{1, 18, -1, 0, 355, 493, 0x9B, 0x43, 0xDA, 0xFF},
	{-8, -8, 2, 0, 346, 441, 0x8D, 0xCC, 0xF2, 0xFF},
	{1, 11, 22, 0, 355, 486, 0xAE, 0x18, 0x5E, 0xFF},
	{30, 43, 23, 0, 357, 492, 0xA9, 0x3E, 0x45, 0xFF},
	{32, 44, -7, 0, 373, 493, 0xDE, 0x5A, 0xAD, 0xFF},
	{68, 32, -5, 0, 413, 415, 0x3F, 0x17, 0x94, 0xFF},
	{26, 26, -13, 0, 410, 439, 0xEF, 0x23, 0x87, 0xFF},
	{32, 44, -7, 0, 415, 456, 0xDE, 0x5A, 0xAD, 0xFF},
	{1, 18, -1, 0, 408, 456, 0x9B, 0x43, 0xDA, 0xFF},
	{32, 44, -7, 0, 582, 767, 0xDE, 0x5A, 0xAD, 0xFF},
	{61, 69, 30, 0, 661, 766, 0x0, 0x7D, 0xE9, 0xFF},
	{96, 55, 39, 0, 690, 341, 0x67, 0x4B, 0xFC, 0xFF},
	{56, 65, 44, 0, 661, 766, 0xCE, 0x4D, 0x58, 0xFF},
	{89, 51, 52, 0, 690, 341, 0x2D, 0x26, 0x71, 0xFF},
	{30, 43, 23, 0, 515, 767, 0xA9, 0x3E, 0x45, 0xFF},
	{11, -12, 20, 0, 354, 398, 0xC9, 0xB6, 0x57, 0xFF},
	{1, 11, 22, 0, 355, 460, 0xAE, 0x18, 0x5E, 0xFF},
	{30, 43, 23, 0, 357, 467, 0xA9, 0x3E, 0x45, 0xFF},
	{59, -4, 30, 0, 358, 308, 0x5, 0x23, 0x7A, 0xFF},
	{57, -13, 44, 0, 355, 306, 0xFB, 0x26, 0x79, 0xFF},
	{52, -23, 38, 0, 356, 247, 0xE5, 0x9C, 0x4A, 0xFF},
	{74, -19, 40, 0, 356, 247, 0x65, 0xDD, 0x45, 0xFF},
	{74, -19, 40, 0, 356, 250, 0x65, 0xDD, 0x45, 0xFF},
	{16, -18, -4, 0, 507, 373, 0xF4, 0x92, 0xC2, 0xFF},
	{52, -23, 38, 0, 514, -164, 0xE5, 0x9C, 0x4A, 0xFF},
	{11, -12, 20, 0, 507, 407, 0xC9, 0xB6, 0x57, 0xFF},
	{-8, -8, 2, 0, 507, 390, 0x8D, 0xCC, 0xF2, 0xFF},
	{74, -8, 14, 0, 181, 262, 0x59, 0xB8, 0xC8, 0xFF},
	{94, 16, 47, 0, 166, 490, 0x3A, 0xC9, 0x63, 0xFF},
	{59, -4, 30, 0, 184, 289, 0x5, 0x23, 0x7A, 0xFF},
	{99, 19, 34, 0, 166, 490, 0x7A, 0xE1, 0xF0, 0xFF},
	{9, 1, -17, 0, 355, 470, 0xDD, 0xF0, 0x87, 0xFF},
	{16, -18, -4, 0, 354, 389, 0xF4, 0x92, 0xC2, 0xFF},
	{60, -24, 26, 0, 356, 267, 0x1E, 0x88, 0xE2, 0xFF},
	{74, -19, 40, 0, 357, 301, 0x65, 0xDD, 0x45, 0xFF},
	{30, 43, 23, 0, 166, 490, 0xA9, 0x3E, 0x45, 0xFF},
	{56, 65, 44, 0, 166, 490, 0xCE, 0x4D, 0x58, 0xFF},
	{61, 69, 30, 0, 395, 493, 0x0, 0x7D, 0xE9, 0xFF},
};

Gfx mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_layer_1_vtx_0 + 0, 50, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
	gsSP2Triangles(4, 3, 5, 0, 4, 5, 6, 0),
	gsSP2Triangles(4, 6, 7, 0, 8, 9, 10, 0),
	gsSP2Triangles(11, 10, 9, 0, 9, 12, 11, 0),
	gsSP2Triangles(12, 9, 13, 0, 14, 12, 13, 0),
	gsSP2Triangles(12, 14, 15, 0, 16, 12, 15, 0),
	gsSP2Triangles(17, 18, 19, 0, 18, 20, 19, 0),
	gsSP2Triangles(21, 22, 3, 0, 23, 3, 22, 0),
	gsSP2Triangles(23, 22, 24, 0, 23, 24, 25, 0),
	gsSP2Triangles(25, 24, 2, 0, 2, 24, 26, 0),
	gsSP2Triangles(7, 25, 2, 0, 27, 28, 13, 0),
	gsSP2Triangles(28, 27, 29, 0, 27, 30, 29, 0),
	gsSP2Triangles(30, 27, 31, 0, 27, 32, 31, 0),
	gsSP2Triangles(32, 33, 31, 0, 31, 34, 30, 0),
	gsSP2Triangles(35, 36, 37, 0, 35, 37, 38, 0),
	gsSP2Triangles(39, 40, 41, 0, 42, 40, 39, 0),
	gsSP2Triangles(43, 44, 13, 0, 44, 43, 8, 0),
	gsSP2Triangles(8, 45, 44, 0, 45, 8, 46, 0),
	gsSP2Triangles(32, 45, 46, 0, 45, 32, 44, 0),
	gsSP2Triangles(47, 48, 16, 0, 16, 48, 49, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1_vtx_0[71] = {
	{135, 64, 8, 0, 482, 706, 0x1E, 0x7B, 0x1, 0xFF},
	{140, 46, 20, 0, 481, 705, 0x51, 0xEA, 0x60, 0xFF},
	{147, 49, -2, 0, 480, 708, 0x69, 0xFF, 0xB8, 0xFF},
	{80, -10, -20, 0, 513, 567, 0x1A, 0xC3, 0x94, 0xFF},
	{47, -18, -23, 0, 401, 583, 0x1, 0xBA, 0x96, 0xFF},
	{82, 14, -13, 0, 515, 436, 0x1A, 0x24, 0x89, 0xFF},
	{60, -18, 36, 0, 783, 750, 0x37, 0xB1, 0x52, 0xFF},
	{90, -13, 16, 0, 681, 862, 0x2A, 0x9C, 0x43, 0xFF},
	{79, -3, 29, 0, 718, 687, 0x57, 0xF9, 0x5D, 0xFF},
	{79, -3, 29, 0, 703, 562, 0x57, 0xF9, 0x5D, 0xFF},
	{90, -13, 16, 0, 704, 546, 0x2A, 0x9C, 0x43, 0xFF},
	{84, 13, 17, 0, 706, 555, 0x4C, 0x11, 0x65, 0xFF},
	{74, 12, 30, 0, 705, 570, 0x5A, 0x16, 0x57, 0xFF},
	{78, 40, 18, 0, 708, 563, 0x3A, 0x47, 0x58, 0xFF},
	{69, 32, 31, 0, 707, 577, 0x40, 0x29, 0x66, 0xFF},
	{53, 71, 1, 0, 537, 64, 0x1A, 0x73, 0xD1, 0xFF},
	{66, 62, 17, 0, 673, 122, 0x4C, 0x5C, 0x2B, 0xFF},
	{71, 44, -6, 0, 514, 437, 0x1E, 0x46, 0x9A, 0xFF},
	{78, 40, 18, 0, 676, 420, 0x3A, 0x47, 0x58, 0xFF},
	{69, 32, 31, 0, 718, 436, 0x40, 0x29, 0x66, 0xFF},
	{-2, -5, -7, 0, 223, 926, 0xB9, 0xA8, 0xC6, 0xFF},
	{-4, -1, 20, 0, 328, 1010, 0xA2, 0xB6, 0x2A, 0xFF},
	{-23, 10, 3, 0, 276, 968, 0x88, 0xD7, 0xF9, 0xFF},
	{34, -33, 20, 0, 459, 882, 0xF1, 0x82, 0xFE, 0xFF},
	{47, -18, -23, 0, 231, 791, 0x1, 0xBA, 0x96, 0xFF},
	{80, -10, -20, 0, 251, 617, 0x1A, 0xC3, 0x94, 0xFF},
	{90, -13, 16, 0, 434, 555, 0x2A, 0x9C, 0x43, 0xFF},
	{60, -18, 36, 0, 527, 731, 0x37, 0xB1, 0x52, 0xFF},
	{25, -26, 49, 0, 593, 918, 0xE0, 0xAF, 0x5C, 0xFF},
	{60, -18, 36, 0, 589, 830, 0x37, 0xB1, 0x52, 0xFF},
	{60, -18, 36, 0, 822, 826, 0x37, 0xB1, 0x52, 0xFF},
	{59, 9, 44, 0, 772, 594, 0x31, 0x7, 0x75, 0xFF},
	{25, -26, 49, 0, 906, 731, 0xE0, 0xAF, 0x5C, 0xFF},
	{24, 50, 43, 0, 834, 92, 0xE8, 0x48, 0x66, 0xFF},
	{69, 32, 31, 0, 722, 436, 0x40, 0x29, 0x66, 0xFF},
	{74, 12, 30, 0, 722, 617, 0x5A, 0x16, 0x57, 0xFF},
	{79, -3, 29, 0, 722, 687, 0x57, 0xF9, 0x5D, 0xFF},
	{-11, 28, 26, 0, 952, 423, 0x9F, 0x20, 0x4C, 0xFF},
	{-4, -1, 20, 0, 991, 625, 0xA2, 0xB6, 0x2A, 0xFF},
	{-23, 10, 3, 0, 971, 524, 0x88, 0xD7, 0xF9, 0xFF},
	{66, 62, 17, 0, 460, 497, 0x4C, 0x5C, 0x2B, 0xFF},
	{53, 71, 1, 0, 280, 609, 0x1A, 0x73, 0xD1, 0xFF},
	{24, 50, 43, 0, 525, 830, 0xE8, 0x48, 0x66, 0xFF},
	{17, 64, -1, 0, 231, 890, 0xD1, 0x6D, 0xD3, 0xFF},
	{-18, 32, 1, 0, 233, 994, 0x94, 0x40, 0xEB, 0xFF},
	{-11, 28, 26, 0, 432, 1002, 0x9F, 0x20, 0x4C, 0xFF},
	{-23, 10, 3, 0, 333, 998, 0x88, 0xD7, 0xF9, 0xFF},
	{140, 46, 20, 0, 475, 719, 0x51, 0xEA, 0x60, 0xFF},
	{84, 13, 17, 0, 482, 719, 0x4C, 0x11, 0x65, 0xFF},
	{147, 49, -2, 0, 475, 721, 0x69, 0xFF, 0xB8, 0xFF},
	{78, 40, 18, 0, 482, 719, 0x3A, 0x47, 0x58, 0xFF},
	{135, 64, 8, 0, 476, 720, 0x1E, 0x7B, 0x1, 0xFF},
	{71, 44, -6, 0, 483, 722, 0x1E, 0x46, 0x9A, 0xFF},
	{82, 14, -13, 0, 482, 722, 0x1A, 0x24, 0x89, 0xFF},
	{156, 9, -3, 0, 474, 721, 0x5F, 0x3C, 0xC5, 0xFF},
	{148, 4, 23, 0, 475, 718, 0x3D, 0x1E, 0x6B, 0xFF},
	{90, -13, 16, 0, 481, 719, 0x2A, 0x9C, 0x43, 0xFF},
	{154, -11, 7, 0, 474, 720, 0x57, 0xA3, 0xFD, 0xFF},
	{80, -10, -20, 0, 482, 723, 0x1A, 0xC3, 0x94, 0xFF},
	{-7, 21, -17, 0, 293, 248, 0xC5, 0xB, 0x90, 0xFF},
	{53, 71, 1, 0, 500, 45, 0x1A, 0x73, 0xD1, 0xFF},
	{71, 44, -6, 0, 510, 218, 0x1E, 0x46, 0x9A, 0xFF},
	{17, 64, -1, 0, 378, 53, 0xD1, 0x6D, 0xD3, 0xFF},
	{-18, 32, 1, 0, 301, 65, 0x94, 0x40, 0xEB, 0xFF},
	{-18, 32, 1, 0, 301, 65, 0x94, 0x40, 0xEB, 0xFF},
	{-7, 21, -17, 0, 293, 248, 0xC5, 0xB, 0x90, 0xFF},
	{-23, 10, 3, 0, 297, 333, 0x88, 0xD7, 0xF9, 0xFF},
	{-2, -5, -7, 0, 295, 601, 0xB9, 0xA8, 0xC6, 0xFF},
	{47, -18, -23, 0, 401, 583, 0x1, 0xBA, 0x96, 0xFF},
	{82, 14, -13, 0, 515, 434, 0x1A, 0x24, 0x89, 0xFF},
	{71, 44, -6, 0, 510, 218, 0x1E, 0x46, 0x9A, 0xFF},
};

Gfx mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1_vtx_0 + 0, 64, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(11, 12, 9, 0, 13, 12, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
	gsSP2Triangles(17, 16, 18, 0, 16, 19, 18, 0),
	gsSP2Triangles(20, 21, 22, 0, 21, 20, 23, 0),
	gsSP2Triangles(23, 20, 24, 0, 25, 23, 24, 0),
	gsSP2Triangles(26, 23, 25, 0, 27, 23, 26, 0),
	gsSP2Triangles(28, 21, 23, 0, 23, 29, 28, 0),
	gsSP2Triangles(30, 31, 32, 0, 32, 31, 33, 0),
	gsSP2Triangles(31, 16, 33, 0, 34, 16, 31, 0),
	gsSP2Triangles(35, 34, 31, 0, 36, 35, 31, 0),
	gsSP2Triangles(36, 31, 6, 0, 33, 37, 32, 0),
	gsSP2Triangles(38, 32, 37, 0, 38, 37, 39, 0),
	gsSP2Triangles(40, 41, 42, 0, 41, 43, 42, 0),
	gsSP2Triangles(43, 44, 42, 0, 42, 44, 45, 0),
	gsSP2Triangles(45, 44, 46, 0, 47, 48, 49, 0),
	gsSP2Triangles(50, 48, 47, 0, 47, 51, 50, 0),
	gsSP2Triangles(52, 50, 51, 0, 51, 53, 52, 0),
	gsSP2Triangles(53, 51, 49, 0, 49, 48, 53, 0),
	gsSP2Triangles(48, 54, 53, 0, 55, 54, 48, 0),
	gsSP2Triangles(56, 55, 48, 0, 56, 57, 55, 0),
	gsSP2Triangles(58, 57, 56, 0, 57, 58, 54, 0),
	gsSP2Triangles(54, 58, 53, 0, 57, 54, 55, 0),
	gsSP2Triangles(59, 60, 61, 0, 62, 60, 59, 0),
	gsSP1Triangle(63, 62, 59, 0),
	gsSPVertex(mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1_vtx_0 + 64, 7, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(3, 1, 4, 0, 1, 5, 4, 0),
	gsSP1Triangle(1, 6, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_009_LThigh_mesh_layer_1_vtx_0[9] = {
	{-15, 31, 2, 0, 496, -333, 0xCF, 0x75, 0x0, 0xFF},
	{-46, -13, 1, 0, 512, -824, 0x81, 0x4, 0x0, 0xFF},
	{-14, -17, 45, 0, -420, -363, 0xD2, 0xFC, 0x76, 0xFF},
	{-14, -17, -43, 0, 1412, -360, 0xD4, 0xFC, 0x89, 0xFF},
	{78, -14, -36, 0, 1338, 1262, 0x2, 0xFE, 0x81, 0xFF},
	{52, 30, 3, 0, 479, 1298, 0x1, 0x7F, 0x0, 0xFF},
	{78, -14, 41, 0, -381, 1258, 0x1, 0xFE, 0x7F, 0xFF},
	{69, -54, 2, 0, 481, 1004, 0x8, 0x81, 0x0, 0xFF},
	{-18, -58, 2, 0, 499, -456, 0xCD, 0x8C, 0x0, 0xFF},
};

Gfx mario_000_offset_009_LThigh_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_009_LThigh_mesh_layer_1_vtx_0 + 0, 9, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(6, 5, 0, 0, 6, 0, 2, 0),
	gsSP2Triangles(7, 6, 2, 0, 7, 2, 8, 0),
	gsSP2Triangles(1, 8, 2, 0, 1, 3, 8, 0),
	gsSP2Triangles(3, 7, 8, 0, 3, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_010_LLeg_skinned_mesh_layer_1_vtx_0[4] = {
	{78, -14, -36, 0, 1338, 1262, 0x2, 0xFE, 0x81, 0xFF},
	{52, 30, 3, 0, 479, 1298, 0x1, 0x7F, 0x0, 0xFF},
	{78, -14, 41, 0, -381, 1258, 0x1, 0xFE, 0x7F, 0xFF},
	{69, -54, 2, 0, 481, 1004, 0x8, 0x81, 0x0, 0xFF},
};

Gfx mario_000_offset_010_LLeg_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_010_LLeg_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_010_LLeg_mesh_layer_1_vtx_0[4] = {
	{92, 31, 2, 0, 461, 2664, 0x43, 0x6C, 0x0, 0xFF},
	{89, -12, 44, 0, -347, 2615, 0x3D, 0x0, 0x6F, 0xFF},
	{19, -53, 3, 0, 476, 1418, 0x0, 0x81, 0x0, 0xFF},
	{89, -12, -40, 0, 1268, 2616, 0x3D, 0x0, 0x90, 0xFF},
};

Gfx mario_000_offset_010_LLeg_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_010_LLeg_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(1, 4, 0, 0, 2, 4, 1, 0),
	gsSP2Triangles(5, 4, 2, 0, 6, 5, 2, 0),
	gsSP2Triangles(6, 2, 3, 0, 0, 6, 3, 0),
	gsSP2Triangles(7, 6, 0, 0, 0, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_010_LLeg_mesh_layer_1_vtx_1[6] = {
	{92, 31, 2, 0, 461, 2664, 0x43, 0x6C, 0x0, 0xFF},
	{99, -14, 2, 0, 460, 2840, 0x7F, 0x0, 0x0, 0xFF},
	{89, -12, -40, 0, 1268, 2616, 0x3D, 0x0, 0x90, 0xFF},
	{89, -12, 44, 0, -347, 2615, 0x3D, 0x0, 0x6F, 0xFF},
	{92, -56, 2, 0, 458, 2658, 0x43, 0x94, 0x0, 0xFF},
	{19, -53, 3, 0, 476, 1418, 0x0, 0x81, 0x0, 0xFF},
};

Gfx mario_000_offset_010_LLeg_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_offset_010_LLeg_mesh_layer_1_vtx_1 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 1, 3, 0, 5, 4, 3, 0),
	gsSP2Triangles(2, 4, 5, 0, 2, 1, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_011_LFoot_mesh_layer_1_vtx_0[72] = {
	{-13, 43, 4, 0, 368, 624, 0xD1, 0x76, 0x2, 0xFF},
	{-7, 40, -24, 0, 368, 496, 0xDE, 0x61, 0xB5, 0xFF},
	{-27, 22, 4, 0, 496, 624, 0x86, 0x24, 0x1, 0xFF},
	{87, 6, 15, 0, 98, 158, 0x45, 0x6B, 0x0, 0xFF},
	{83, 8, 36, 0, 47, 158, 0x2E, 0x53, 0x55, 0xFF},
	{101, 1, 27, 0, 69, 158, 0x6B, 0x44, 0x9, 0xFF},
	{39, 24, 4, 0, 125, 158, 0x2B, 0x78, 0x0, 0xFF},
	{87, 6, -7, 0, 152, 158, 0x45, 0x6B, 0x0, 0xFF},
	{101, 1, 4, 0, 125, 158, 0x6C, 0x43, 0x0, 0xFF},
	{83, 8, -28, 0, 203, 158, 0x2E, 0x53, 0xAB, 0xFF},
	{101, 1, -19, 0, 181, 158, 0x6B, 0x44, 0xF7, 0xFF},
	{38, 24, -30, 0, 207, 158, 0x1E, 0x5D, 0xAE, 0xFF},
	{76, -7, -31, 0, 209, 121, 0x11, 0xF5, 0x83, 0xFF},
	{31, 6, -35, 0, 218, 115, 0xFB, 0x0, 0x81, 0xFF},
	{66, -23, -28, 0, 201, 78, 0x1, 0xA0, 0xAD, 0xFF},
	{24, -12, -29, 0, 206, 70, 0xDD, 0xAB, 0xA8, 0xFF},
	{22, -19, 4, 0, 125, 53, 0xD8, 0x87, 0x0, 0xFF},
	{70, -26, -7, 0, 151, 76, 0xD, 0x82, 0xF9, 0xFF},
	{70, -26, 15, 0, 98, 77, 0xD, 0x82, 0x7, 0xFF},
	{66, -23, 36, 0, 48, 78, 0x2, 0x9F, 0x52, 0xFF},
	{24, -12, 37, 0, 44, 70, 0xDD, 0xAB, 0x58, 0xFF},
	{31, 6, 43, 0, 31, 115, 0xFB, 0x0, 0x7F, 0xFF},
	{76, -7, 39, 0, 40, 121, 0x11, 0xF5, 0x7D, 0xFF},
	{38, 24, 38, 0, 42, 158, 0x1E, 0x5D, 0x52, 0xFF},
	{-5, 40, 32, 0, 57, 158, 0xE2, 0x61, 0x4C, 0xFF},
	{-13, 43, 4, 0, 125, 158, 0xD1, 0x76, 0x2, 0xFF},
	{-7, 40, -24, 0, 193, 158, 0xDE, 0x61, 0xB5, 0xFF},
	{-18, 8, -24, 0, 193, 80, 0xAC, 0xDC, 0xA7, 0xFF},
	{-27, 0, 4, 0, 125, 57, 0x98, 0xB8, 0x0, 0xFF},
	{-18, 8, 32, 0, 57, 80, 0xAC, 0xDD, 0x59, 0xFF},
	{-27, 22, 4, 0, 125, 104, 0x86, 0x24, 0x1, 0xFF},
	{92, -21, 27, 0, 656, 827, 0x41, 0x93, 0xB, 0xFF},
	{66, -23, 36, 0, 710, 979, 0x2, 0x9F, 0x52, 0xFF},
	{70, -26, 15, 0, 714, 653, 0xD, 0x82, 0x7, 0xFF},
	{97, -10, 34, 0, 600, 949, 0x42, 0xE8, 0x6A, 0xFF},
	{102, -11, 27, 0, 595, 837, 0x79, 0xD9, 0xA, 0xFF},
	{101, 1, 27, 0, 545, 830, 0x6B, 0x44, 0x9, 0xFF},
	{83, 8, 36, 0, 545, 991, 0x2E, 0x53, 0x55, 0xFF},
	{76, -7, 39, 0, 622, 1034, 0x11, 0xF5, 0x7D, 0xFF},
	{70, -26, -7, 0, 714, 653, 0xD, 0x82, 0xF9, 0xFF},
	{66, -23, -28, 0, 710, 969, 0x1, 0xA0, 0xAD, 0xFF},
	{92, -21, -19, 0, 656, 822, 0x41, 0x93, 0xF5, 0xFF},
	{98, -10, -12, 0, 599, 704, 0x51, 0xE3, 0x5E, 0xFF},
	{102, -11, -20, 0, 595, 832, 0x79, 0xDA, 0xF7, 0xFF},
	{97, -10, -26, 0, 600, 940, 0x42, 0xE8, 0x96, 0xFF},
	{101, 1, -19, 0, 545, 826, 0x6B, 0x44, 0xF7, 0xFF},
	{83, 8, -28, 0, 545, 982, 0x2E, 0x53, 0xAB, 0xFF},
	{76, -7, -31, 0, 623, 1025, 0x11, 0xF5, 0x83, 0xFF},
	{92, -21, -19, 0, 656, 818, 0x41, 0x93, 0xF5, 0xFF},
	{87, 6, -7, 0, 545, 653, 0x45, 0x6B, 0x0, 0xFF},
	{86, -8, -8, 0, 605, 645, 0x71, 0xC7, 0xE, 0xFF},
	{87, 6, 15, 0, 545, 653, 0x45, 0x6B, 0x0, 0xFF},
	{101, 1, 27, 0, 545, 826, 0x6B, 0x44, 0x9, 0xFF},
	{98, -10, 20, 0, 599, 704, 0x52, 0xE3, 0xA3, 0xFF},
	{102, -11, 27, 0, 595, 832, 0x79, 0xD9, 0xA, 0xFF},
	{92, -21, 27, 0, 656, 822, 0x41, 0x93, 0xB, 0xFF},
	{87, -8, 16, 0, 605, 645, 0x71, 0xC7, 0xF2, 0xFF},
	{101, 1, 4, 0, 545, 302, 0x6C, 0x43, 0x0, 0xFF},
	{87, 6, 15, 0, 545, 238, 0x45, 0x6B, 0x0, 0xFF},
	{98, -10, 11, 0, 599, 259, 0x51, 0xE4, 0x5D, 0xFF},
	{87, -8, 16, 0, 609, 237, 0x71, 0xC7, 0xF2, 0xFF},
	{70, -26, 15, 0, 714, 238, 0xD, 0x82, 0x7, 0xFF},
	{92, -21, 4, 0, 656, 302, 0x47, 0x96, 0x0, 0xFF},
	{70, -26, -7, 0, 715, 369, 0xD, 0x82, 0xF9, 0xFF},
	{92, -21, 4, 0, 656, 302, 0x47, 0x96, 0x0, 0xFF},
	{70, -26, -7, 0, 715, 369, 0xD, 0x82, 0xF9, 0xFF},
	{98, -10, -3, 0, 599, 345, 0x51, 0xE4, 0xA2, 0xFF},
	{86, -8, -8, 0, 609, 372, 0x71, 0xC7, 0xE, 0xFF},
	{87, 6, -7, 0, 545, 370, 0x45, 0x6B, 0x0, 0xFF},
	{101, 1, 4, 0, 545, 302, 0x6C, 0x43, 0x0, 0xFF},
	{102, -11, 4, 0, 595, 302, 0x79, 0xDA, 0x0, 0xFF},
	{98, -10, 11, 0, 599, 259, 0x51, 0xE4, 0x5D, 0xFF},
};

Gfx mario_000_offset_011_LFoot_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_011_LFoot_mesh_layer_1_vtx_0 + 0, 64, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 4, 3, 0, 6, 3, 7, 0),
	gsSP2Triangles(8, 7, 3, 0, 6, 7, 9, 0),
	gsSP2Triangles(10, 9, 7, 0, 6, 9, 11, 0),
	gsSP2Triangles(11, 9, 12, 0, 11, 12, 13, 0),
	gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
	gsSP2Triangles(16, 15, 14, 0, 16, 14, 17, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(16, 19, 20, 0, 21, 20, 19, 0),
	gsSP2Triangles(21, 19, 22, 0, 23, 21, 22, 0),
	gsSP2Triangles(23, 22, 4, 0, 6, 23, 4, 0),
	gsSP2Triangles(24, 23, 6, 0, 24, 6, 25, 0),
	gsSP2Triangles(26, 25, 6, 0, 26, 6, 11, 0),
	gsSP2Triangles(26, 11, 13, 0, 27, 26, 13, 0),
	gsSP2Triangles(27, 13, 15, 0, 27, 15, 16, 0),
	gsSP2Triangles(27, 16, 28, 0, 29, 28, 16, 0),
	gsSP2Triangles(29, 16, 20, 0, 20, 21, 29, 0),
	gsSP2Triangles(24, 29, 21, 0, 23, 24, 21, 0),
	gsSP2Triangles(29, 24, 30, 0, 24, 25, 30, 0),
	gsSP2Triangles(29, 30, 28, 0, 30, 27, 28, 0),
	gsSP2Triangles(26, 27, 30, 0, 31, 32, 33, 0),
	gsSP2Triangles(32, 31, 34, 0, 31, 35, 34, 0),
	gsSP2Triangles(35, 36, 34, 0, 37, 34, 36, 0),
	gsSP2Triangles(37, 38, 34, 0, 38, 32, 34, 0),
	gsSP2Triangles(39, 40, 41, 0, 39, 41, 42, 0),
	gsSP2Triangles(41, 43, 42, 0, 43, 41, 44, 0),
	gsSP2Triangles(45, 43, 44, 0, 44, 46, 45, 0),
	gsSP2Triangles(44, 47, 46, 0, 40, 47, 44, 0),
	gsSP2Triangles(48, 40, 44, 0, 43, 45, 42, 0),
	gsSP2Triangles(45, 49, 42, 0, 49, 50, 42, 0),
	gsSP2Triangles(50, 39, 42, 0, 51, 52, 53, 0),
	gsSP2Triangles(52, 54, 53, 0, 54, 55, 53, 0),
	gsSP2Triangles(55, 33, 53, 0, 33, 56, 53, 0),
	gsSP2Triangles(56, 51, 53, 0, 57, 58, 59, 0),
	gsSP2Triangles(58, 60, 59, 0, 60, 61, 59, 0),
	gsSP2Triangles(61, 62, 59, 0, 61, 63, 62, 0),
	gsSPVertex(mario_000_offset_011_LFoot_mesh_layer_1_vtx_0 + 64, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
	gsSP2Triangles(5, 6, 2, 0, 6, 5, 7, 0),
	gsSP2Triangles(0, 6, 7, 0, 6, 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_012_RThigh_mesh_layer_1_vtx_0[9] = {
	{-46, -13, -1, 0, 512, -824, 0x81, 0x4, 0x0, 0xFF},
	{-14, -17, -46, 0, -420, -363, 0xD2, 0xFC, 0x8A, 0xFF},
	{-18, -58, -2, 0, 499, -456, 0xCD, 0x8C, 0x0, 0xFF},
	{-15, 31, -2, 0, 496, -333, 0xCF, 0x75, 0x0, 0xFF},
	{-14, -17, 43, 0, 1412, -360, 0xD4, 0xFC, 0x77, 0xFF},
	{69, -54, -3, 0, 481, 1004, 0x8, 0x81, 0x0, 0xFF},
	{78, -14, -41, 0, -381, 1258, 0x1, 0xFE, 0x81, 0xFF},
	{52, 30, -3, 0, 479, 1298, 0x1, 0x7F, 0x0, 0xFF},
	{78, -14, 35, 0, 1338, 1262, 0x2, 0xFE, 0x7F, 0xFF},
};

Gfx mario_000_offset_012_RThigh_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_012_RThigh_mesh_layer_1_vtx_0 + 0, 9, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 0, 4, 0, 0, 2, 4, 0),
	gsSP2Triangles(4, 2, 5, 0, 5, 2, 1, 0),
	gsSP2Triangles(5, 1, 6, 0, 6, 1, 3, 0),
	gsSP2Triangles(6, 3, 7, 0, 3, 8, 7, 0),
	gsSP2Triangles(3, 4, 8, 0, 4, 5, 8, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_013_RLeg_skinned_mesh_layer_1_vtx_0[4] = {
	{78, -14, 35, 0, 1338, 1262, 0x2, 0xFE, 0x7F, 0xFF},
	{52, 30, -3, 0, 479, 1298, 0x1, 0x7F, 0x0, 0xFF},
	{78, -14, -41, 0, -381, 1258, 0x1, 0xFE, 0x81, 0xFF},
	{69, -54, -3, 0, 481, 1004, 0x8, 0x81, 0x0, 0xFF},
};

Gfx mario_000_offset_013_RLeg_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_013_RLeg_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_013_RLeg_mesh_layer_1_vtx_0[4] = {
	{92, 31, -3, 0, 461, 2664, 0x43, 0x6C, 0x0, 0xFF},
	{89, -12, 39, 0, 1268, 2616, 0x3D, 0x0, 0x70, 0xFF},
	{19, -53, -3, 0, 476, 1418, 0x0, 0x81, 0x0, 0xFF},
	{89, -12, -45, 0, -347, 2615, 0x3D, 0x0, 0x91, 0xFF},
};

Gfx mario_000_offset_013_RLeg_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_013_RLeg_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(1, 0, 4, 0, 4, 0, 5, 0),
	gsSP2Triangles(5, 0, 6, 0, 0, 3, 6, 0),
	gsSP2Triangles(6, 3, 2, 0, 6, 2, 7, 0),
	gsSP2Triangles(2, 4, 7, 0, 1, 4, 2, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_013_RLeg_mesh_layer_1_vtx_1[6] = {
	{89, -12, 39, 0, 1268, 2616, 0x3D, 0x0, 0x70, 0xFF},
	{19, -53, -3, 0, 476, 1418, 0x0, 0x81, 0x0, 0xFF},
	{92, -56, -3, 0, 458, 2658, 0x43, 0x94, 0x0, 0xFF},
	{89, -12, -45, 0, -347, 2615, 0x3D, 0x0, 0x91, 0xFF},
	{99, -14, -3, 0, 460, 2840, 0x7F, 0x0, 0x0, 0xFF},
	{92, 31, -3, 0, 461, 2664, 0x43, 0x6C, 0x0, 0xFF},
};

Gfx mario_000_offset_013_RLeg_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_offset_013_RLeg_mesh_layer_1_vtx_1 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(2, 3, 4, 0, 3, 5, 4, 0),
	gsSP2Triangles(5, 0, 4, 0, 0, 2, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_005_RFoot_mesh_layer_1_vtx_0[69] = {
	{-13, 43, -4, 0, 368, 624, 0xD1, 0x76, 0xFE, 0xFF},
	{-27, 22, -4, 0, 496, 624, 0x86, 0x24, 0xFF, 0xFF},
	{-7, 40, 24, 0, 368, 496, 0xDE, 0x61, 0x4B, 0xFF},
	{87, 6, -15, 0, 98, 158, 0x45, 0x6B, 0x0, 0xFF},
	{101, 1, -27, 0, 69, 158, 0x6B, 0x44, 0xF7, 0xFF},
	{83, 8, -37, 0, 47, 158, 0x2E, 0x53, 0xAB, 0xFF},
	{39, 24, -4, 0, 125, 158, 0x2B, 0x78, 0x0, 0xFF},
	{38, 24, -38, 0, 42, 158, 0x1E, 0x5D, 0xAE, 0xFF},
	{76, -7, -39, 0, 40, 121, 0x11, 0xF5, 0x83, 0xFF},
	{31, 6, -43, 0, 31, 115, 0xFB, 0x0, 0x81, 0xFF},
	{66, -23, -36, 0, 48, 78, 0x1, 0x9F, 0xAE, 0xFF},
	{24, -12, -38, 0, 44, 70, 0xDD, 0xAB, 0xA8, 0xFF},
	{22, -19, -4, 0, 125, 53, 0xD8, 0x87, 0x0, 0xFF},
	{70, -26, -15, 0, 98, 77, 0xD, 0x82, 0xF9, 0xFF},
	{70, -26, 7, 0, 151, 76, 0xD, 0x82, 0x7, 0xFF},
	{66, -23, 27, 0, 201, 78, 0x1, 0xA0, 0x53, 0xFF},
	{24, -12, 29, 0, 206, 70, 0xDD, 0xAB, 0x58, 0xFF},
	{31, 6, 34, 0, 218, 115, 0xFB, 0x0, 0x7F, 0xFF},
	{76, -7, 31, 0, 209, 121, 0x11, 0xF5, 0x7D, 0xFF},
	{38, 24, 30, 0, 207, 158, 0x1E, 0x5D, 0x52, 0xFF},
	{83, 8, 28, 0, 203, 158, 0x2E, 0x53, 0x55, 0xFF},
	{87, 6, 7, 0, 152, 158, 0x45, 0x6B, 0x0, 0xFF},
	{101, 1, 19, 0, 181, 158, 0x6B, 0x44, 0x9, 0xFF},
	{101, 1, -4, 0, 125, 158, 0x6C, 0x43, 0x0, 0xFF},
	{92, -21, -27, 0, 656, 827, 0x41, 0x93, 0xF5, 0xFF},
	{70, -26, -15, 0, 714, 653, 0xD, 0x82, 0xF9, 0xFF},
	{66, -23, -36, 0, 710, 979, 0x1, 0x9F, 0xAE, 0xFF},
	{97, -10, -34, 0, 600, 949, 0x42, 0xE8, 0x96, 0xFF},
	{76, -7, -39, 0, 622, 1034, 0x11, 0xF5, 0x83, 0xFF},
	{83, 8, -37, 0, 545, 991, 0x2E, 0x53, 0xAB, 0xFF},
	{101, 1, -27, 0, 545, 830, 0x6B, 0x44, 0xF7, 0xFF},
	{102, -11, -28, 0, 595, 837, 0x79, 0xD9, 0xF6, 0xFF},
	{70, -26, 7, 0, 714, 653, 0xD, 0x82, 0x7, 0xFF},
	{92, -21, 19, 0, 656, 822, 0x41, 0x93, 0xB, 0xFF},
	{66, -23, 27, 0, 710, 969, 0x1, 0xA0, 0x53, 0xFF},
	{98, -10, 12, 0, 599, 704, 0x51, 0xE3, 0xA2, 0xFF},
	{86, -8, 8, 0, 605, 645, 0x71, 0xC7, 0xF2, 0xFF},
	{87, 6, 7, 0, 545, 653, 0x45, 0x6B, 0x0, 0xFF},
	{101, 1, 19, 0, 545, 826, 0x6B, 0x44, 0x9, 0xFF},
	{102, -11, 19, 0, 595, 832, 0x79, 0xDA, 0x9, 0xFF},
	{97, -10, 26, 0, 600, 940, 0x42, 0xE8, 0x6A, 0xFF},
	{83, 8, 28, 0, 545, 982, 0x2E, 0x53, 0x55, 0xFF},
	{76, -7, 31, 0, 623, 1025, 0x11, 0xF5, 0x7D, 0xFF},
	{92, -21, 19, 0, 656, 818, 0x41, 0x93, 0xB, 0xFF},
	{-18, 8, -32, 0, 57, 80, 0xAC, 0xDD, 0xA7, 0xFF},
	{-27, 0, -4, 0, 125, 57, 0x98, 0xB8, 0x0, 0xFF},
	{-18, 8, 24, 0, 193, 80, 0xAC, 0xDC, 0x59, 0xFF},
	{-7, 40, 24, 0, 193, 158, 0xDE, 0x61, 0x4B, 0xFF},
	{-13, 43, -4, 0, 125, 158, 0xD1, 0x76, 0xFE, 0xFF},
	{-5, 40, -32, 0, 57, 158, 0xE2, 0x61, 0xB4, 0xFF},
	{-27, 22, -4, 0, 125, 104, 0x86, 0x24, 0xFF, 0xFF},
	{101, 1, -4, 0, 545, 302, 0x6C, 0x43, 0x0, 0xFF},
	{98, -10, -11, 0, 599, 259, 0x51, 0xE4, 0xA3, 0xFF},
	{87, 6, -15, 0, 545, 238, 0x45, 0x6B, 0x0, 0xFF},
	{102, -11, -4, 0, 595, 302, 0x79, 0xDA, 0x0, 0xFF},
	{98, -10, 3, 0, 599, 345, 0x51, 0xE4, 0x5E, 0xFF},
	{87, 6, 7, 0, 545, 370, 0x45, 0x6B, 0x0, 0xFF},
	{86, -8, 8, 0, 609, 372, 0x71, 0xC7, 0xF2, 0xFF},
	{70, -26, 7, 0, 715, 369, 0xD, 0x82, 0x7, 0xFF},
	{92, -21, -4, 0, 656, 302, 0x47, 0x96, 0x0, 0xFF},
	{70, -26, -15, 0, 714, 238, 0xD, 0x82, 0xF9, 0xFF},
	{87, -8, -16, 0, 609, 237, 0x71, 0xC7, 0xE, 0xFF},
	{87, -8, -16, 0, 605, 645, 0x71, 0xC7, 0xE, 0xFF},
	{98, -10, -20, 0, 599, 704, 0x52, 0xE3, 0x5D, 0xFF},
	{87, 6, -15, 0, 545, 653, 0x45, 0x6B, 0x0, 0xFF},
	{70, -26, -15, 0, 714, 653, 0xD, 0x82, 0xF9, 0xFF},
	{92, -21, -27, 0, 656, 822, 0x41, 0x93, 0xF5, 0xFF},
	{102, -11, -28, 0, 595, 832, 0x79, 0xD9, 0xF6, 0xFF},
	{101, 1, -27, 0, 545, 826, 0x6B, 0x44, 0xF7, 0xFF},
};

Gfx mario_000_displaylist_005_RFoot_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_displaylist_005_RFoot_mesh_layer_1_vtx_0 + 0, 62, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 3, 5, 0, 6, 5, 7, 0),
	gsSP2Triangles(7, 5, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 11, 10, 0, 12, 10, 13, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(12, 15, 16, 0, 17, 16, 15, 0),
	gsSP2Triangles(17, 15, 18, 0, 19, 17, 18, 0),
	gsSP2Triangles(19, 18, 20, 0, 6, 19, 20, 0),
	gsSP2Triangles(6, 20, 21, 0, 22, 21, 20, 0),
	gsSP2Triangles(6, 21, 3, 0, 23, 3, 21, 0),
	gsSP2Triangles(24, 25, 26, 0, 26, 27, 24, 0),
	gsSP2Triangles(28, 27, 26, 0, 29, 27, 28, 0),
	gsSP2Triangles(29, 30, 27, 0, 31, 27, 30, 0),
	gsSP2Triangles(24, 27, 31, 0, 32, 33, 34, 0),
	gsSP2Triangles(32, 35, 33, 0, 36, 35, 32, 0),
	gsSP2Triangles(37, 35, 36, 0, 38, 35, 37, 0),
	gsSP2Triangles(39, 35, 38, 0, 38, 40, 39, 0),
	gsSP2Triangles(40, 38, 41, 0, 40, 41, 42, 0),
	gsSP2Triangles(34, 40, 42, 0, 43, 40, 34, 0),
	gsSP2Triangles(39, 40, 33, 0, 33, 35, 39, 0),
	gsSP2Triangles(11, 44, 9, 0, 44, 11, 12, 0),
	gsSP2Triangles(44, 12, 45, 0, 46, 45, 12, 0),
	gsSP2Triangles(46, 12, 16, 0, 46, 16, 17, 0),
	gsSP2Triangles(46, 17, 47, 0, 47, 17, 19, 0),
	gsSP2Triangles(47, 19, 6, 0, 47, 6, 48, 0),
	gsSP2Triangles(49, 48, 6, 0, 49, 6, 7, 0),
	gsSP2Triangles(7, 9, 49, 0, 49, 9, 44, 0),
	gsSP2Triangles(44, 50, 49, 0, 44, 45, 50, 0),
	gsSP2Triangles(50, 45, 46, 0, 47, 50, 46, 0),
	gsSP2Triangles(49, 50, 48, 0, 51, 52, 53, 0),
	gsSP2Triangles(54, 52, 51, 0, 51, 55, 54, 0),
	gsSP2Triangles(56, 55, 51, 0, 57, 55, 56, 0),
	gsSP2Triangles(58, 55, 57, 0, 59, 55, 58, 0),
	gsSP2Triangles(60, 59, 58, 0, 60, 52, 59, 0),
	gsSP2Triangles(61, 52, 60, 0, 53, 52, 61, 0),
	gsSP2Triangles(59, 52, 54, 0, 54, 55, 59, 0),
	gsSPVertex(mario_000_displaylist_005_RFoot_mesh_layer_1_vtx_0 + 62, 7, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 1, 3, 0, 5, 1, 4, 0),
	gsSP2Triangles(6, 1, 5, 0, 2, 1, 6, 0),
	gsSPEndDisplayList(),
};


Gfx mat_mario_Pants_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, mario_pants_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(mario_Pants_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_Shirt_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, mario_ShirtPattern_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(mario_Shirt_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_metal[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPTexture(4031, 1983, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, mario_metal_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_metal[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsSPEndDisplayList(),
};

Gfx mat_mario_Hand[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, mario_Hand_Texture_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(mario_Hand_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_face_0___Open_Eyes[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, mario_FullFace_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(mario_face_0___Open_Eyes_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_face_1___Half_Eyes[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, mario_HalfBlink_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(mario_face_1___Half_Eyes_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_face_2___Closed_Eyes[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, mario_FaceBlink_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(mario_face_2___Closed_Eyes_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_face_7___Dead_Eyes[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, mario_FrightenedFace_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(mario_face_7___Dead_Eyes_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_wingCombined[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 64, mario_wingCombined_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 16, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 16, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_wingCombined[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_bottom_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_bottom_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_bottom_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_bottom_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_bottom_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_bottom_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_001_Chest_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_001_Chest_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_001_Chest_skinned_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_001_Chest_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_001_Chest_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_001_Chest_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_001_Chest_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_001_Chest_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_001_Chest_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mario_000_offset_001_Chest_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_skinned_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_Head_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_skinned_mesh_layer_1_mat_override_face_1___Half_Eyes_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_skinned_mesh_layer_1_mat_override_face_2___Closed_Eyes_2[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_skinned_mesh_layer_1_mat_override_face_2___Closed_Eyes_3[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_skinned_mesh_layer_1_mat_override_face_7___Dead_Eyes_4[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_face_0___Open_Eyes),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_layer_1_mat_override_face_1___Half_Eyes_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_face_1___Half_Eyes),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_layer_1_mat_override_face_2___Closed_Eyes_2[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_face_2___Closed_Eyes),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_layer_1_mat_override_face_2___Closed_Eyes_3[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_face_2___Closed_Eyes),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_layer_1_mat_override_face_7___Dead_Eyes_4[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_face_7___Dead_Eyes),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_001_RWing_mesh_layer_4[] = {
	gsSPDisplayList(mat_mario_wingCombined),
	gsSPDisplayList(mario_000_displaylist_001_RWing_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_wingCombined),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_001_RWing_mesh_layer_4_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_001_RWing_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_002_LWing_mesh_layer_4[] = {
	gsSPDisplayList(mat_mario_wingCombined),
	gsSPDisplayList(mario_000_displaylist_002_LWing_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_wingCombined),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_002_LWing_mesh_layer_4_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_002_LWing_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_003_LShoulder_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_003_LShoulder_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_003_LShoulder_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_003_LShoulder_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_004_LArm_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_004_LArm_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_004_LArm_skinned_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_004_LArm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_004_LArm_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_004_LArm_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_004_LArm_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_004_LArm_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_004_LArm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mario_000_offset_004_LArm_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_003_LHand_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_003_LHand_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_003_LHand_skinned_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_003_LHand_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_003_LHand_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_003_LHand_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_displaylist_003_LHand_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_003_LHand_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_003_LHand_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mario_000_displaylist_003_LHand_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_006_Rshoulder_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_006_Rshoulder_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_006_Rshoulder_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_006_Rshoulder_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_007_RArm_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_007_RArm_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_007_RArm_skinned_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_007_RArm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_007_RArm_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_007_RArm_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_007_RArm_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_007_RArm_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_007_RArm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mario_000_offset_007_RArm_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_004_Rhand_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_004_Rhand_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_004_Rhand_skinned_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_004_Rhand_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_004_Rhand_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_004_Rhand_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_displaylist_004_Rhand_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_004_Rhand_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_004_Rhand_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mario_000_displaylist_004_Rhand_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_009_LThigh_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_009_LThigh_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_009_LThigh_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_009_LThigh_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_010_LLeg_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_010_LLeg_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_010_LLeg_skinned_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_010_LLeg_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_010_LLeg_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_010_LLeg_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_010_LLeg_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_010_LLeg_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_010_LLeg_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mario_000_offset_010_LLeg_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_011_LFoot_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_offset_011_LFoot_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_011_LFoot_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_011_LFoot_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_012_RThigh_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_012_RThigh_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_012_RThigh_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_012_RThigh_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_013_RLeg_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_013_RLeg_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_013_RLeg_skinned_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_013_RLeg_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_013_RLeg_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_013_RLeg_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_013_RLeg_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_013_RLeg_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_013_RLeg_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mario_000_offset_013_RLeg_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_005_RFoot_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_005_RFoot_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_005_RFoot_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_005_RFoot_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

