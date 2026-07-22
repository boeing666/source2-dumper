#pragma once

class CCitadel_Modifier_LurkersAmbush_Invis : public CCitadel_Modifier_Invis /*0x0*/  // sizeof 0x490, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x460]; // offset 0x0
    CUtlOrderedMap< C_CitadelPlayerPawn*, GameTime_t > m_mapStartLookTime; // offset 0x460, size 0x28, align 8
    GameTime_t m_flStartSpotted; // offset 0x488, size 0x4, align 255
    char _pad_048C[0x4]; // offset 0x48C
};
