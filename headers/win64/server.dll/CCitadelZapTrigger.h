#pragma once

class CCitadelZapTrigger : public CFuncBrush /*0x0*/  // sizeof 0x800, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7A0]; // offset 0x0
    float32 m_flShootAfterEnteringTime; // offset 0x7A0, size 0x4, align 4
    float32 m_flWaitForNextShootTime; // offset 0x7A4, size 0x4, align 4
    float32 m_flPercentMaxHealthDamage; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0x4]; // offset 0x7AC
    CUtlSymbolLarge m_strShootOrigin; // offset 0x7B0, size 0x8, align 8
    char _pad_07B8[0x48]; // offset 0x7B8
};
