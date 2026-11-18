#pragma once

class CNmSoundEventBase : public CNmEvent /*0x0*/  // sizeof 0x30, align 0xFF [vtable abstract] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CNmEventRelevance_t m_relevance; // offset 0x18, size 0x4, align 4
    bool m_bContinuePlayingSoundAtDurationEnd; // offset 0x1C, size 0x1, align 1
    char _pad_001D[0x3]; // offset 0x1D
    float32 m_flDurationInterruptionThreshold; // offset 0x20, size 0x4, align 4
    CNmSoundEventBase::Position_t m_position; // offset 0x24, size 0x4, align 4
    CUtlString m_attachmentName; // offset 0x28, size 0x8, align 8
};
