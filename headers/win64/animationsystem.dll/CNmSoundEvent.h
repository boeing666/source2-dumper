#pragma once

class CNmSoundEvent : public CNmEvent /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CNmEventRelevance_t m_relevance; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    CUtlString m_name; // offset 0x28, size 0x8, align 8
    CNmSoundEvent::Position_t m_position; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
    CUtlString m_attachmentName; // offset 0x38, size 0x8, align 8
    CUtlString m_tags; // offset 0x40, size 0x8, align 8
    bool m_bContinuePlayingSoundAtDurationEnd; // offset 0x48, size 0x1, align 1
    char _pad_0049[0x3]; // offset 0x49
    float32 m_flDurationInterruptionThreshold; // offset 0x4C, size 0x4, align 4
};
