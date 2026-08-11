#pragma once

class CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 stone_duration; // offset 0x1A78, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x1A7C, size 0x4, align 255
};
