#pragma once

class CFuncShatterglass : public CBaseModelEntity /*0x0*/  // sizeof 0x980, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    matrix3x4_t m_matPanelTransform; // offset 0x850, size 0x30, align 4
    matrix3x4_t m_matPanelTransformWsTemp; // offset 0x880, size 0x30, align 4
    CUtlVector< uint32 > m_vecShatterGlassShards; // offset 0x8B0, size 0x18, align 8
    Vector2D m_PanelSize; // offset 0x8C8, size 0x8, align 4
    GameTime_t m_flLastShatterSoundEmitTime; // offset 0x8D0, size 0x4, align 255
    GameTime_t m_flLastCleanupTime; // offset 0x8D4, size 0x4, align 255
    GameTime_t m_flInitAtTime; // offset 0x8D8, size 0x4, align 255
    float32 m_flGlassThickness; // offset 0x8DC, size 0x4, align 4
    float32 m_flSpawnInvulnerability; // offset 0x8E0, size 0x4, align 4
    bool m_bBreakSilent; // offset 0x8E4, size 0x1, align 1
    bool m_bBreakShardless; // offset 0x8E5, size 0x1, align 1
    bool m_bBroken; // offset 0x8E6, size 0x1, align 1
    bool m_bGlassNavIgnore; // offset 0x8E7, size 0x1, align 1
    bool m_bGlassInFrame; // offset 0x8E8, size 0x1, align 1
    bool m_bStartBroken; // offset 0x8E9, size 0x1, align 1
    uint8 m_iInitialDamageType; // offset 0x8EA, size 0x1, align 1
    char _pad_08EB[0x5]; // offset 0x8EB
    CUtlSymbolLarge m_szDamagePositioningEntityName01; // offset 0x8F0, size 0x8, align 8
    CUtlSymbolLarge m_szDamagePositioningEntityName02; // offset 0x8F8, size 0x8, align 8
    CUtlSymbolLarge m_szDamagePositioningEntityName03; // offset 0x900, size 0x8, align 8
    CUtlSymbolLarge m_szDamagePositioningEntityName04; // offset 0x908, size 0x8, align 8
    CUtlVector< VectorWS > m_vInitialDamagePositions; // offset 0x910, size 0x18, align 8
    CUtlVector< VectorWS > m_vExtraDamagePositions; // offset 0x928, size 0x18, align 8
    CUtlVector< Vector4D > m_vInitialPanelVertices; // offset 0x940, size 0x18, align 8
    CEntityIOOutput m_OnBroken; // offset 0x958, size 0x18, align 255
    uint8 m_iSurfaceType; // offset 0x970, size 0x1, align 1
    char _pad_0971[0x7]; // offset 0x971
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageBase; // offset 0x978, size 0x8, align 8
};
