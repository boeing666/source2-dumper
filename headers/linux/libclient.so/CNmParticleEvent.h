#pragma once

class CNmParticleEvent : public CNmEvent /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CNmEventRelevance_t m_relevance; // offset 0x18, size 0x4, align 4
    CNmParticleEvent::Type_t m_type; // offset 0x1C, size 0x4, align 4
    CNmEventTargetEntity_t m_target; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleSystem; // offset 0x28, size 0x8, align 8
    CUtlString m_tags; // offset 0x30, size 0x8, align 8
    bool m_bStopImmediately; // offset 0x38, size 0x1, align 1
    bool m_bDetachFromOwner; // offset 0x39, size 0x1, align 1
    bool m_bPlayEndCap; // offset 0x3A, size 0x1, align 1
    char _pad_003B[0x5]; // offset 0x3B
    CUtlString m_attachmentPoint0; // offset 0x40, size 0x8, align 8
    ParticleAttachment_t m_attachmentType0; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
    CUtlString m_attachmentPoint1; // offset 0x50, size 0x8, align 8
    ParticleAttachment_t m_attachmentType1; // offset 0x58, size 0x4, align 4
    char _pad_005C[0x4]; // offset 0x5C
    CUtlString m_config; // offset 0x60, size 0x8, align 8
    CUtlString m_effectForConfig; // offset 0x68, size 0x8, align 8
};
