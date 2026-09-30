#pragma once

class CCitadelZapTrigger : public CFuncBrush /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x898]; // offset 0x0
    float32 m_flShootAfterEnteringTime; // offset 0x898, size 0x4, align 4
    float32 m_flWaitForNextShootTime; // offset 0x89C, size 0x4, align 4
    float32 m_flPercentMaxHealthDamage; // offset 0x8A0, size 0x4, align 4
    char _pad_08A4[0x4]; // offset 0x8A4
    CUtlSymbolLarge m_strShootOrigin; // offset 0x8A8, size 0x8, align 8
    char _pad_08B0[0x48]; // offset 0x8B0
};
