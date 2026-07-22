#pragma once

struct CitadelUnitStatusSettings_t  // sizeof 0x30, align 0x4 [trivial_dtor] (client) {MModelGameData MGetKV3ClassDefaults}
{
    Vector m_vUnitStatusOffset; // offset 0x0, size 0xC, align 4 | MPropertyStartGroup MPropertyFriendlyName
    Vector m_vHealthbarOffset; // offset 0xC, size 0xC, align 4 | MPropertyStartGroup MPropertyFriendlyName
    Vector m_vDamageNumbersOffset; // offset 0x18, size 0xC, align 4 | MPropertyStartGroup MPropertyFriendlyName
    Vector m_vStatusEffectsOffset; // offset 0x24, size 0xC, align 4 | MPropertyStartGroup MPropertyFriendlyName
};
