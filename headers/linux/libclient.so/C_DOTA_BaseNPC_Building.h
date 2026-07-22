#pragma once

class C_DOTA_BaseNPC_Building : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x1BA8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1B34]; // offset 0x0
    int32 m_iDamageLevel; // offset 0x1B34, size 0x4, align 4
    ParticleIndex_t m_nAmbientFXIndex; // offset 0x1B38, size 0x4, align 255
    ParticleIndex_t m_nTPFXIndex; // offset 0x1B3C, size 0x4, align 255
    ParticleIndex_t m_nStatusFXIndex; // offset 0x1B40, size 0x4, align 255
    char _pad_1B44[0x4]; // offset 0x1B44
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndex; // offset 0x1B48, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndexDestruction; // offset 0x1B50, size 0x8, align 8
    QAngle m_angInitialAngles; // offset 0x1B58, size 0xC, align 4
    HSequence m_hHeroStatueSequence; // offset 0x1B64, size 0x4, align 255
    HSequence m_hConstantLayerSequence; // offset 0x1B68, size 0x4, align 255
    float32 m_fHeroStatueCycle; // offset 0x1B6C, size 0x4, align 4
    int32 m_iHeroStatueStatusEffectIndex; // offset 0x1B70, size 0x4, align 4
    bool m_bHeroStatue; // offset 0x1B74, size 0x1, align 1
    bool m_bBattleCup; // offset 0x1B75, size 0x1, align 1
    char[32] m_HeroStatueInscription; // offset 0x1B76, size 0x20, align 1
    char _pad_1B96[0x2]; // offset 0x1B96
    PlayerID_t m_iHeroStatueOwnerPlayerID; // offset 0x1B98, size 0x4, align 255
    Color m_ParticleTintColor; // offset 0x1B9C, size 0x4, align 1
    FowCustomTeams_t m_nFoWTeam; // offset 0x1BA0, size 0x4, align 4
    char _pad_1BA4[0x4]; // offset 0x1BA4
};
