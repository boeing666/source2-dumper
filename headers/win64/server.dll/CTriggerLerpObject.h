#pragma once

class CTriggerLerpObject : public CBaseTrigger /*0x0*/  // sizeof 0xA90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    CUtlSymbolLarge m_iszLerpTarget; // offset 0x9F0, size 0x8, align 8
    CHandle< CBaseEntity > m_hLerpTarget; // offset 0x9F8, size 0x4, align 4
    char _pad_09FC[0x4]; // offset 0x9FC
    CUtlSymbolLarge m_iszLerpTargetAttachment; // offset 0xA00, size 0x8, align 8
    AttachmentHandle_t m_hLerpTargetAttachment; // offset 0xA08, size 0x1, align 255
    char _pad_0A09[0x3]; // offset 0xA09
    float32 m_flLerpDuration; // offset 0xA0C, size 0x4, align 4
    bool m_bAttachedEntityWasParented; // offset 0xA10, size 0x1, align 1
    bool m_bLerpRestoreMoveType; // offset 0xA11, size 0x1, align 1
    bool m_bSingleLerpObject; // offset 0xA12, size 0x1, align 1
    char _pad_0A13[0x5]; // offset 0xA13
    CUtlVector< lerpdata_t > m_vecLerpingObjects; // offset 0xA18, size 0x18, align 8
    CUtlSymbolLarge m_iszLerpEffect; // offset 0xA30, size 0x8, align 8
    CUtlSymbolLarge m_iszLerpSound; // offset 0xA38, size 0x8, align 8
    bool m_bAttachTouchingObject; // offset 0xA40, size 0x1, align 1
    char _pad_0A41[0x3]; // offset 0xA41
    CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // offset 0xA44, size 0x4, align 4
    CEntityIOOutput m_OnLerpStarted; // offset 0xA48, size 0x18, align 255
    CEntityIOOutput m_OnLerpFinished; // offset 0xA60, size 0x18, align 255
    CEntityIOOutput m_OnDetached; // offset 0xA78, size 0x18, align 255
};
