#pragma once

struct CitadelUnitQuerySettings_t  // sizeof 0x14, align 0x4 [trivial_dtor] (client) {MModelGameData MGetKV3ClassDefaults MPropertyFriendlyName MFgdHelper}
{
    EUnitQueryVolumeMode m_eQueryVolumeMode; // offset 0x0, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    char _pad_0001[0x3]; // offset 0x1
    float32 m_flMaxQueryRadius; // offset 0x4, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName MPropertyDescription
    float32 m_flQueryRadius; // offset 0x8, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName
    float32 m_flQueryHeight; // offset 0xC, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName MPropertyDescription
    float32 m_flQueryZOffset; // offset 0x10, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName MPropertyDescription
};
