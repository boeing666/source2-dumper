#pragma once

class CDOTA_Modifier_AghsFort_TreantMiniboss_NaturesGuise : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CountdownTimer m_RevealTimer; // offset 0x1AF8, size 0x18, align 8
    CountdownTimer m_InvisAttackTimer; // offset 0x1B10, size 0x18, align 8
    CountdownTimer m_CooldownTimer; // offset 0x1B28, size 0x18, align 8
};
