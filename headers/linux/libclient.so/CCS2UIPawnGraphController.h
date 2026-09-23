#pragma once

class CCS2UIPawnGraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x240, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< float32 > m_nAnimationSeed; // offset 0xC0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_characterMode; // offset 0xD8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bCharacterModeReset; // offset 0xF0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_nTeamPreviewVariant; // offset 0x108, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_nTeamPreviewRandom; // offset 0x120, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_nTeamPreviewPosition; // offset 0x138, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_endOfMatchCelebration; // offset 0x150, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_action; // offset 0x168, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_bannerAnimation; // offset 0x180, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponCategory; // offset 0x198, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponType; // offset 0x1B0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponState; // offset 0x1C8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_inspectTurnAngle; // offset 0x1E0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_nChickSnapshotVariant; // offset 0x1F8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_nChickLifeStage; // offset 0x210, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bCT; // offset 0x228, size 0x18, align 8
};
