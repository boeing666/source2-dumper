#pragma once

struct TimeScalingValue_t  // sizeof 0x10, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 m_flBase; // offset 0x0, size 0x4, align 4 | MPropertyFlattenIntoParentRow MPropertyFlattenIncludeLabel MPropertyFriendlyName
    float32 m_flPerMinuteAfterStart; // offset 0x4, size 0x4, align 4 | MPropertyFlattenIntoParentRow MPropertyFlattenIncludeLabel MPropertyFriendlyName
    float32 m_flStartMinute; // offset 0x8, size 0x4, align 4 | MPropertyFlattenIntoParentRow MPropertyFlattenIncludeLabel MPropertyFriendlyName
    float32 m_flMaxValue; // offset 0xC, size 0x4, align 4 | MPropertyFlattenIntoParentRow MPropertyFlattenIncludeLabel MPropertyFriendlyName
};
