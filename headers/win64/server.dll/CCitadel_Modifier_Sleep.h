#pragma once

class CCitadel_Modifier_Sleep : public CCitadelModifier /*0x0*/  // sizeof 0x180, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecSleepModifiers; // offset 0x150, size 0x18, align 8
    bool m_bIsWakingUp; // offset 0x168, size 0x1, align 1
    char _pad_0169[0x3]; // offset 0x169
    float32 m_flMinSleepDamageToWake; // offset 0x16C, size 0x4, align 4
    float32 m_flMinSleepTime; // offset 0x170, size 0x4, align 4
    float32 m_flWakeUpDelay; // offset 0x174, size 0x4, align 4
    float32 m_flTotalDamageTakenWhileAsleep; // offset 0x178, size 0x4, align 4
    char _pad_017C[0x4]; // offset 0x17C
};
