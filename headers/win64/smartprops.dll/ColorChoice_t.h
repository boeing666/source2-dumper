#pragma once

struct ColorChoice_t  // sizeof 0x80, align 0x8 (smartprops) {MGetKV3ClassDefaults}
{
    CSmartPropAttributeColor m_Color; // offset 0x0, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeFloat m_flWeight; // offset 0x40, size 0x40, align 8 | MPropertyDescription
};
