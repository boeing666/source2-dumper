#pragma once

class CParticleAnimTag : public CAnimTagBase /*0x0*/  // sizeof 0x98, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleSystem; // offset 0x58, size 0x8, align 8 | MPropertySuppressField
    CUtlString m_particleSystemName; // offset 0x60, size 0x8, align 8 | MPropertyAttributeEditor MPropertyFriendlyName
    CUtlString m_configName; // offset 0x68, size 0x8, align 8 | MPropertyFriendlyName
    bool m_bDetachFromOwner; // offset 0x70, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAggregate; // offset 0x71, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bStopWhenTagEnds; // offset 0x72, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName
    bool m_bTagEndStopIsInstant; // offset 0x73, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName
    char _pad_0074[0x4]; // offset 0x74
    CUtlString m_attachmentName; // offset 0x78, size 0x8, align 8 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeChoiceName
    ParticleAttachment_t m_attachmentType; // offset 0x80, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    char _pad_0084[0x4]; // offset 0x84
    CUtlString m_attachmentCP1Name; // offset 0x88, size 0x8, align 8 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeChoiceName
    ParticleAttachment_t m_attachmentCP1Type; // offset 0x90, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    char _pad_0094[0x4]; // offset 0x94
};
