#pragma once

struct DamageReceivedSounds_t  // sizeof 0x60, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CSoundEventName m_strDamageReceiveDefault; // offset 0x0, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strDamageReceiveNPC; // offset 0x10, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strDamageReceiveDOT; // offset 0x20, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strDamageReceiveMeleeNPC; // offset 0x30, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strDamageReceiveMelee; // offset 0x40, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strDamageReceiveShield; // offset 0x50, size 0x10, align 8 | MPropertyDescription
};
