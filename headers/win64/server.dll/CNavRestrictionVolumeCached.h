#pragma once

class CNavRestrictionVolumeCached  // sizeof 0x28, align 0x8 (server) {MGetKV3ClassDefaults}
{
public:
    CHandle< CMarkupVolume > m_hMarkupVolume; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x24]; // offset 0x4
};
