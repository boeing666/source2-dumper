#pragma once

class CPointValueRemapper : public CBaseEntity /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bDisabled; // offset 0x778, size 0x1, align 1
    bool m_bUpdateOnClient; // offset 0x779, size 0x1, align 1
    char _pad_077A[0x2]; // offset 0x77A
    ValueRemapperInputType_t m_nInputType; // offset 0x77C, size 0x4, align 4
    CUtlSymbolLarge m_iszRemapLineStartName; // offset 0x780, size 0x8, align 8
    CUtlSymbolLarge m_iszRemapLineEndName; // offset 0x788, size 0x8, align 8
    CHandle< CBaseEntity > m_hRemapLineStart; // offset 0x790, size 0x4, align 4
    CHandle< CBaseEntity > m_hRemapLineEnd; // offset 0x794, size 0x4, align 4
    float32 m_flMaximumChangePerSecond; // offset 0x798, size 0x4, align 4
    float32 m_flDisengageDistance; // offset 0x79C, size 0x4, align 4
    float32 m_flEngageDistance; // offset 0x7A0, size 0x4, align 4
    bool m_bRequiresUseKey; // offset 0x7A4, size 0x1, align 1
    char _pad_07A5[0x3]; // offset 0x7A5
    ValueRemapperOutputType_t m_nOutputType; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0x4]; // offset 0x7AC
    CUtlSymbolLarge m_iszOutputEntityName; // offset 0x7B0, size 0x8, align 8
    CUtlSymbolLarge m_iszOutputEntity2Name; // offset 0x7B8, size 0x8, align 8
    CUtlSymbolLarge m_iszOutputEntity3Name; // offset 0x7C0, size 0x8, align 8
    CUtlSymbolLarge m_iszOutputEntity4Name; // offset 0x7C8, size 0x8, align 8
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hOutputEntities; // offset 0x7D0, size 0x18, align 8 | MNotSaved
    ValueRemapperHapticsType_t m_nHapticsType; // offset 0x7E8, size 0x4, align 4
    ValueRemapperMomentumType_t m_nMomentumType; // offset 0x7EC, size 0x4, align 4
    float32 m_flMomentumModifier; // offset 0x7F0, size 0x4, align 4
    float32 m_flSnapValue; // offset 0x7F4, size 0x4, align 4
    float32 m_flCurrentMomentum; // offset 0x7F8, size 0x4, align 4
    ValueRemapperRatchetType_t m_nRatchetType; // offset 0x7FC, size 0x4, align 4
    float32 m_flRatchetOffset; // offset 0x800, size 0x4, align 4
    float32 m_flInputOffset; // offset 0x804, size 0x4, align 4
    bool m_bEngaged; // offset 0x808, size 0x1, align 1
    bool m_bFirstUpdate; // offset 0x809, size 0x1, align 1
    char _pad_080A[0x2]; // offset 0x80A
    float32 m_flPreviousValue; // offset 0x80C, size 0x4, align 4
    GameTime_t m_flPreviousUpdateTickTime; // offset 0x810, size 0x4, align 255
    VectorWS m_vecPreviousTestPoint; // offset 0x814, size 0xC, align 4
    CHandle< CBasePlayerPawn > m_hUsingPlayer; // offset 0x820, size 0x4, align 4
    float32 m_flCustomOutputValue; // offset 0x824, size 0x4, align 4
    CUtlSymbolLarge m_iszSoundEngage; // offset 0x828, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundDisengage; // offset 0x830, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundReachedValueZero; // offset 0x838, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundReachedValueOne; // offset 0x840, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundMovingLoop; // offset 0x848, size 0x8, align 8
    char _pad_0850[0x18]; // offset 0x850
    CEntityOutputTemplate< float32 > m_Position; // offset 0x868, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_PositionDelta; // offset 0x888, size 0x20, align 8
    CEntityIOOutput m_OnReachedValueZero; // offset 0x8A8, size 0x18, align 255
    CEntityIOOutput m_OnReachedValueOne; // offset 0x8C0, size 0x18, align 255
    CEntityIOOutput m_OnReachedValueCustom; // offset 0x8D8, size 0x18, align 255
    CEntityIOOutput m_OnEngage; // offset 0x8F0, size 0x18, align 255
    CEntityIOOutput m_OnDisengage; // offset 0x908, size 0x18, align 255
};
