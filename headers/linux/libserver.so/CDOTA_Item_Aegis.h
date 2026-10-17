#pragma once

class CDOTA_Item_Aegis : public CDOTA_Item /*0x0*/  // sizeof 0x940, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x934]; // offset 0x0
    int32 m_iKillerTeam; // offset 0x934, size 0x4, align 4
    GameTime_t m_fEquipTime; // offset 0x938, size 0x4, align 255
    char _pad_093C[0x4]; // offset 0x93C
};
