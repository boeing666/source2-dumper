#pragma once

struct VMixOscDesc_t  // sizeof 0xC, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    VMixLFOShape_t oscType; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_freq; // offset 0x4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flPhase; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
};
