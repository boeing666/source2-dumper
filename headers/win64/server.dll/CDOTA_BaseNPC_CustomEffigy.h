#pragma once

class CDOTA_BaseNPC_CustomEffigy : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x19C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x19C0]; // offset 0x0
    uint32 m_unStatusEffectIndex; // offset 0x19C0, size 0x4, align 4
    CHandle< CBaseEntity > m_hPedestal; // offset 0x19C4, size 0x4, align 4
};
