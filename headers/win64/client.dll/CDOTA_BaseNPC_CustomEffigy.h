#pragma once

class CDOTA_BaseNPC_CustomEffigy : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1A30, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A28]; // offset 0x0
    uint32 m_unStatusEffectIndex; // offset 0x1A28, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPedestal; // offset 0x1A2C, size 0x4, align 4
};
