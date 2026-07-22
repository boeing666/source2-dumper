#pragma once

class CFuncShatterglass : public CBaseModelEntity /*0x0*/  // sizeof 0xB80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA4C]; // offset 0x0
    matrix3x4_t m_matPanelTransform; // offset 0xA4C, size 0x30, align 4
    matrix3x4_t m_matPanelTransformWsTemp; // offset 0xA7C, size 0x30, align 4
    char _pad_0AAC[0x4]; // offset 0xAAC
    CUtlVector< uint32 > m_vecShatterGlassShards; // offset 0xAB0, size 0x18, align 8
    Vector2D m_PanelSize; // offset 0xAC8, size 0x8, align 4
    GameTime_t m_flLastShatterSoundEmitTime; // offset 0xAD0, size 0x4, align 255
    GameTime_t m_flLastCleanupTime; // offset 0xAD4, size 0x4, align 255
    GameTime_t m_flInitAtTime; // offset 0xAD8, size 0x4, align 255
    float32 m_flGlassThickness; // offset 0xADC, size 0x4, align 4
    float32 m_flSpawnInvulnerability; // offset 0xAE0, size 0x4, align 4
    bool m_bBreakSilent; // offset 0xAE4, size 0x1, align 1
    bool m_bBreakShardless; // offset 0xAE5, size 0x1, align 1
    bool m_bBroken; // offset 0xAE6, size 0x1, align 1
    bool m_bGlassNavIgnore; // offset 0xAE7, size 0x1, align 1
    bool m_bGlassInFrame; // offset 0xAE8, size 0x1, align 1
    bool m_bStartBroken; // offset 0xAE9, size 0x1, align 1
    uint8 m_iInitialDamageType; // offset 0xAEA, size 0x1, align 1
    char _pad_0AEB[0x5]; // offset 0xAEB
    CUtlSymbolLarge m_szDamagePositioningEntityName01; // offset 0xAF0, size 0x8, align 8
    CUtlSymbolLarge m_szDamagePositioningEntityName02; // offset 0xAF8, size 0x8, align 8
    CUtlSymbolLarge m_szDamagePositioningEntityName03; // offset 0xB00, size 0x8, align 8
    CUtlSymbolLarge m_szDamagePositioningEntityName04; // offset 0xB08, size 0x8, align 8
    CUtlVector< VectorWS > m_vInitialDamagePositions; // offset 0xB10, size 0x18, align 8
    CUtlVector< VectorWS > m_vExtraDamagePositions; // offset 0xB28, size 0x18, align 8
    CUtlVector< Vector4D > m_vInitialPanelVertices; // offset 0xB40, size 0x18, align 8
    CEntityIOOutput m_OnBroken; // offset 0xB58, size 0x18, align 255
    uint8 m_iSurfaceType; // offset 0xB70, size 0x1, align 1
    char _pad_0B71[0x7]; // offset 0xB71
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageBase; // offset 0xB78, size 0x8, align 8
};
