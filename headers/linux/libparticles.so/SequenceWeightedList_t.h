#pragma once

struct SequenceWeightedList_t  // sizeof 0x8, align 0x4 [trivial_dtor] (particles) {MGetKV3ClassDefaults}
{
    int32 m_nSequence; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeEditor
    float32 m_flRelativeWeight; // offset 0x4, size 0x4, align 4 | MPropertyFriendlyName
};
