#pragma once

class CCitadel_Modifier_Sleep : public CCitadelModifier /*0x0*/  // sizeof 0x100, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecSleepModifiers; // offset 0xD0, size 0x18, align 8
    bool m_bIsWakingUp; // offset 0xE8, size 0x1, align 1
    char _pad_00E9[0x3]; // offset 0xE9
    float32 m_flMinSleepDamageToWake; // offset 0xEC, size 0x4, align 4
    float32 m_flMinSleepTime; // offset 0xF0, size 0x4, align 4
    float32 m_flWakeUpDelay; // offset 0xF4, size 0x4, align 4
    float32 m_flTotalDamageTakenWhileAsleep; // offset 0xF8, size 0x4, align 4
    char _pad_00FC[0x4]; // offset 0xFC
};
