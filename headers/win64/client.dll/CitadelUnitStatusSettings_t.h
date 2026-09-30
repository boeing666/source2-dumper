#pragma once

struct CitadelUnitStatusSettings_t  // sizeof 0x48, align 0x8 (client) {MModelGameData MGetKV3ClassDefaults MPropertyFriendlyName}
{
    CUtlStringTokenWithStorage m_strUnitStatusAttachmentName; // offset 0x0, size 0x18, align 8 | MPropertyStartGroup MPropertyFriendlyName
    Vector m_vUnitStatusOffset; // offset 0x18, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_vHealthbarOffset; // offset 0x24, size 0xC, align 4 | MPropertyStartGroup MPropertyFriendlyName
    Vector m_vDamageNumbersOffset; // offset 0x30, size 0xC, align 4 | MPropertyStartGroup MPropertyFriendlyName
    Vector m_vStatusEffectsOffset; // offset 0x3C, size 0xC, align 4 | MPropertyStartGroup MPropertyFriendlyName
};
