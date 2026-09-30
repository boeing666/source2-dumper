#pragma once

class CCitadel_Modifier_LurkersAmbush_Invis : public CCitadel_Modifier_Invis /*0x0*/  // sizeof 0x658, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x628]; // offset 0x0
    CUtlOrderedMap< CCitadelPlayerPawn*, GameTime_t > m_mapStartLookTime; // offset 0x628, size 0x28, align 8
    GameTime_t m_flStartSpotted; // offset 0x650, size 0x4, align 255
    char _pad_0654[0x4]; // offset 0x654
};
