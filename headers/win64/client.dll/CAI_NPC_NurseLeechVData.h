#pragma once

class CAI_NPC_NurseLeechVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x1080, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC30]; // offset 0x0
    CRangeFloat m_flDropUpSpeed; // offset 0xC30, size 0x8, align 255 | MPropertyStartGroup MPropertyDescription
    CRangeFloat m_flDropOutSpeed; // offset 0xC38, size 0x8, align 255 | MPropertyDescription
    CRangeFloat m_flJarLaunchUpSpeed; // offset 0xC40, size 0x8, align 255 | MPropertyDescription
    float32 m_flCollectRadius; // offset 0xC48, size 0x4, align 4 | MPropertyDescription
    float32 m_flCrawlRadius; // offset 0xC4C, size 0x4, align 4 | MPropertyDescription
    float32 m_flCrawlCycleDuration; // offset 0xC50, size 0x4, align 4 | MPropertyDescription
    char _pad_0C54[0x4]; // offset 0xC54
    CPiecewiseCurve m_CrawlCycleCurve; // offset 0xC58, size 0x40, align 8 | MPropertyDescription
    float32 m_flModelScaleAttachedStart; // offset 0xC98, size 0x4, align 4
    float32 m_flModelScaleAttachedEnd; // offset 0xC9C, size 0x4, align 4
    float32 m_flModelScaleHunting; // offset 0xCA0, size 0x4, align 4 | MPropertyDescription
    Color m_HuntingRenderColor; // offset 0xCA4, size 0x4, align 4 | MPropertyDescription
    float32 m_flMinScaleDuration; // offset 0xCA8, size 0x4, align 4
    float32 m_flMaxScaleDuration; // offset 0xCAC, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CollectParticle; // offset 0xCB0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpawnParticle; // offset 0xD90, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PickupIndicatorParticle; // offset 0xE70, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // offset 0xF50, size 0xE0, align 8 | MPropertyDescription
    float32 m_flTrailRadius; // offset 0x1030, size 0x4, align 4 | MPropertyDescription
    float32 m_flTrailRadiusHunting; // offset 0x1034, size 0x4, align 4 | MPropertyDescription
    CUtlString m_sVacuumAttachmentTarget; // offset 0x1038, size 0x8, align 8 | MPropertyFriendlyName
    CSoundEventName m_strCollectSound; // offset 0x1040, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strVacuumStartSound; // offset 0x1050, size 0x10, align 8
    CSoundEventName m_strMovementStartSound; // offset 0x1060, size 0x10, align 8
    CSoundEventName m_strMovementLoopSound; // offset 0x1070, size 0x10, align 8
};
