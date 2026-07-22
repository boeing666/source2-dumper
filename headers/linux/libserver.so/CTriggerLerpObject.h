#pragma once

class CTriggerLerpObject : public CBaseTrigger /*0x0*/  // sizeof 0xC68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC8]; // offset 0x0
    CUtlSymbolLarge m_iszLerpTarget; // offset 0xBC8, size 0x8, align 8
    CHandle< CBaseEntity > m_hLerpTarget; // offset 0xBD0, size 0x4, align 4
    char _pad_0BD4[0x4]; // offset 0xBD4
    CUtlSymbolLarge m_iszLerpTargetAttachment; // offset 0xBD8, size 0x8, align 8
    AttachmentHandle_t m_hLerpTargetAttachment; // offset 0xBE0, size 0x1, align 255
    char _pad_0BE1[0x3]; // offset 0xBE1
    float32 m_flLerpDuration; // offset 0xBE4, size 0x4, align 4
    bool m_bAttachedEntityWasParented; // offset 0xBE8, size 0x1, align 1
    bool m_bLerpRestoreMoveType; // offset 0xBE9, size 0x1, align 1
    bool m_bSingleLerpObject; // offset 0xBEA, size 0x1, align 1
    char _pad_0BEB[0x5]; // offset 0xBEB
    CUtlVector< lerpdata_t > m_vecLerpingObjects; // offset 0xBF0, size 0x18, align 8
    CUtlSymbolLarge m_iszLerpEffect; // offset 0xC08, size 0x8, align 8
    CUtlSymbolLarge m_iszLerpSound; // offset 0xC10, size 0x8, align 8
    bool m_bAttachTouchingObject; // offset 0xC18, size 0x1, align 1
    char _pad_0C19[0x3]; // offset 0xC19
    CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // offset 0xC1C, size 0x4, align 4
    CEntityIOOutput m_OnLerpStarted; // offset 0xC20, size 0x18, align 255
    CEntityIOOutput m_OnLerpFinished; // offset 0xC38, size 0x18, align 255
    CEntityIOOutput m_OnDetached; // offset 0xC50, size 0x18, align 255
};
