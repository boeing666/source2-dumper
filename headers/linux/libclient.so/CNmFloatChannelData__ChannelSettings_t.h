#pragma once

struct CNmFloatChannelData::ChannelSettings_t  // sizeof 0xC, align 0x4 [trivial_dtor] (animlib) {MGetKV3ClassDefaults}
{
    NmCompressionSettings_t::QuantizationRange_t m_range; // offset 0x0, size 0x8, align 4
    bool m_bIsStatic; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x3]; // offset 0x9
};
