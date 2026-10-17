#pragma once

struct MaterialGroupChoice_t  // sizeof 0x80, align 0x8 (smartprops) {MGetKV3ClassDefaults}
{
    CSmartPropAttributeMaterialGroup m_MaterialGroupName; // offset 0x0, size 0x40, align 8 | MPropertyAttributeEditor MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeFloat m_flWeight; // offset 0x40, size 0x40, align 8 | MPropertyDescription
};
