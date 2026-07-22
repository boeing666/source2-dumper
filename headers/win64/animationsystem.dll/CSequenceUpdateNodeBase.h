#pragma once

class CSequenceUpdateNodeBase : public CLeafUpdateNode /*0x0*/  // sizeof 0x78, align 0xFF [vtable abstract] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x6C]; // offset 0x0
    float32 m_playbackSpeed; // offset 0x6C, size 0x4, align 4
    bool m_bLoop; // offset 0x70, size 0x1, align 1
    char _pad_0071[0x7]; // offset 0x71
};
