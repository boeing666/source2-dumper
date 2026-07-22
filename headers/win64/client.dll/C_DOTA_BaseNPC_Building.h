#pragma once

class C_DOTA_BaseNPC_Building : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x1A20, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x19B0]; // offset 0x0
    int32 m_iDamageLevel; // offset 0x19B0, size 0x4, align 4
    ParticleIndex_t m_nAmbientFXIndex; // offset 0x19B4, size 0x4, align 255
    ParticleIndex_t m_nTPFXIndex; // offset 0x19B8, size 0x4, align 255
    ParticleIndex_t m_nStatusFXIndex; // offset 0x19BC, size 0x4, align 255
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndex; // offset 0x19C0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndexDestruction; // offset 0x19C8, size 0x8, align 8
    QAngle m_angInitialAngles; // offset 0x19D0, size 0xC, align 4
    HSequence m_hHeroStatueSequence; // offset 0x19DC, size 0x4, align 255
    HSequence m_hConstantLayerSequence; // offset 0x19E0, size 0x4, align 255
    float32 m_fHeroStatueCycle; // offset 0x19E4, size 0x4, align 4
    int32 m_iHeroStatueStatusEffectIndex; // offset 0x19E8, size 0x4, align 4
    bool m_bHeroStatue; // offset 0x19EC, size 0x1, align 1
    bool m_bBattleCup; // offset 0x19ED, size 0x1, align 1
    char[32] m_HeroStatueInscription; // offset 0x19EE, size 0x20, align 1
    char _pad_1A0E[0x2]; // offset 0x1A0E
    PlayerID_t m_iHeroStatueOwnerPlayerID; // offset 0x1A10, size 0x4, align 255
    Color m_ParticleTintColor; // offset 0x1A14, size 0x4, align 1
    FowCustomTeams_t m_nFoWTeam; // offset 0x1A18, size 0x4, align 4
    char _pad_1A1C[0x4]; // offset 0x1A1C
};
