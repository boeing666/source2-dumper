#pragma once

class CDOTA_BaseNPC_CustomEffigy : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1D98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D8C]; // offset 0x0
    uint32 m_unStatusEffectIndex; // offset 0x1D8C, size 0x4, align 4
    CHandle< CBaseEntity > m_hPedestal; // offset 0x1D90, size 0x4, align 4
    char _pad_1D94[0x4]; // offset 0x1D94
};
