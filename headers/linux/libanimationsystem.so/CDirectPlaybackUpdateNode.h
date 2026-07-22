#pragma once

class CDirectPlaybackUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x74]; // offset 0x0
    bool m_bFinishEarly; // offset 0x74, size 0x1, align 1
    bool m_bResetOnFinish; // offset 0x75, size 0x1, align 1
    char _pad_0076[0x2]; // offset 0x76
    CUtlVector< CDirectPlaybackTagData > m_allTags; // offset 0x78, size 0x18, align 8
};
