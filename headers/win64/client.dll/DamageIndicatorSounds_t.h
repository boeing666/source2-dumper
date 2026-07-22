#pragma once

struct DamageIndicatorSounds_t  // sizeof 0x60, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CSoundEventName m_strDamageDefault; // offset 0x0, size 0x10, align 8
    CSoundEventName m_strDamageCrit; // offset 0x10, size 0x10, align 8
    CSoundEventName m_strDamageLethal; // offset 0x20, size 0x10, align 8
    CSoundEventName m_strDamageInvulnerable; // offset 0x30, size 0x10, align 8
    CSoundEventName m_strDamageDOT; // offset 0x40, size 0x10, align 8
    CSoundEventName m_strDamageHealthTransfer; // offset 0x50, size 0x10, align 8
};
