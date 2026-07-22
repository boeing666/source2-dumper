#pragma once

class CVMixToolEffectsList  // sizeof 0x18, align 0xFF (sounddoc_lib)
{
public:
    CUtlVector< CVMixEffectPreset > m_list; // offset 0x0, size 0x18, align 8
};
