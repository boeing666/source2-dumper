#pragma once

class CDOTA_Item_Necronomicon : public CDOTA_Item /*0x0*/  // sizeof 0x660, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x658]; // offset 0x0
    CHandle< CBaseEntity > m_hWarrior; // offset 0x658, size 0x4, align 4
    CHandle< CBaseEntity > m_hArcher; // offset 0x65C, size 0x4, align 4
};
