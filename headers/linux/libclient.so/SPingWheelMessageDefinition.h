#pragma once

class SPingWheelMessageDefinition  // sizeof 0x278, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    PingWheelMessageID_t nID; // offset 0xC, size 0x4, align 255 | MPropertyDescription MVDataUniqueMonotonicInt MPropertyAttributeEditor
    PingWheelMessageID_t nAssociatedID; // offset 0x10, size 0x4, align 255 | MPropertyDescription
    char _pad_0014[0x4]; // offset 0x14
    CUtlString sLocName; // offset 0x18, size 0x8, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > sParticle; // offset 0x20, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > sParticleTarget; // offset 0x100, size 0xE0, align 8 | MPropertyDescription
    Color color; // offset 0x1E0, size 0x4, align 1 | MPropertyDescription MPropertyColorPlusAlpha
    char _pad_01E4[0x4]; // offset 0x1E4
    CPanoramaImageName sImage; // offset 0x1E8, size 0x10, align 8 | MPropertyDescription
    CUtlString sSound; // offset 0x1F8, size 0x8, align 8 | MPropertyDescription MPropertyCustomFGDType
    CUtlString sChat; // offset 0x200, size 0x8, align 8 | MPropertyDescription
    CUtlString sChatWithTarget; // offset 0x208, size 0x8, align 8 | MPropertyDescription
    EEvent eUnlockEvent; // offset 0x210, size 0x4, align 4 | MPropertyDescription
    uint32 nUnlockEventActionID; // offset 0x214, size 0x4, align 4 | MPropertyDescription
    float32 m_flMinimapDuration; // offset 0x218, size 0x4, align 4 | MPropertyDescription
    bool m_bFlashTargetIcon; // offset 0x21C, size 0x1, align 1 | MPropertyDescription
    char _pad_021D[0x3]; // offset 0x21D
    PingMinimapIconInfo_t m_minimapIconInfo; // offset 0x220, size 0x24, align 4
    char _pad_0244[0x4]; // offset 0x244
    CUtlVector< PingMinimapIconLayerInfo_t > m_vecAdditionalMinimapLayers; // offset 0x248, size 0x18, align 8 | MPropertyDescription
    PingParticleInfo_t m_particleInfo; // offset 0x260, size 0x14, align 4
    bool m_bRequiresDotaPlus; // offset 0x274, size 0x1, align 1
    bool m_bIsBindable; // offset 0x275, size 0x1, align 1
    char _pad_0276[0x2]; // offset 0x276
};
