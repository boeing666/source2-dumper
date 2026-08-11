#pragma once

class CDOTA_Modifier_AghsFort_TreantMiniboss_NaturesGuise : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CountdownTimer m_RevealTimer; // offset 0x1A78, size 0x18, align 8
    CountdownTimer m_InvisAttackTimer; // offset 0x1A90, size 0x18, align 8
    CountdownTimer m_CooldownTimer; // offset 0x1AA8, size 0x18, align 8
};
