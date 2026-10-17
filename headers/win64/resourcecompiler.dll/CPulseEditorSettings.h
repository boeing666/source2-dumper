#pragma once

class CPulseEditorSettings  // sizeof 0x218, align 0x8 (pulsedoc_lib) {MGetKV3ClassDefaults}
{
public:
    Color m_colCanvasBackground; // offset 0x0, size 0x4, align 4
    Color m_colCanvasBackgroundWhenDebugging; // offset 0x4, size 0x4, align 4
    Color m_colCanvasBackgroundStaleCompile; // offset 0x8, size 0x4, align 4
    Color m_colCanvasBorderStaleCompile; // offset 0xC, size 0x4, align 4
    Color m_colCanvasBorderDebuggerDetached; // offset 0x10, size 0x4, align 4
    float32 m_flGridSnapV2; // offset 0x14, size 0x4, align 4 | MPropertyStartGroup
    bool m_bSnapAbsToGrid; // offset 0x18, size 0x1, align 1
    bool m_bSnapSizeToGrid; // offset 0x19, size 0x1, align 1
    bool m_bGridMinorPoints; // offset 0x1A, size 0x1, align 1
    char _pad_001B[0x1]; // offset 0x1B
    float32 m_flGridMinorSpacingV2; // offset 0x1C, size 0x4, align 4
    float32 m_flSuppressMinorGridFurtherThan; // offset 0x20, size 0x4, align 4
    Color m_colGridMinorColor; // offset 0x24, size 0x4, align 4
    float32 m_flGridMinorWidth; // offset 0x28, size 0x4, align 4
    int32 m_nGridMajorMultiple; // offset 0x2C, size 0x4, align 4 | MPropertyAttributeRange
    Color m_colGridMajorColor; // offset 0x30, size 0x4, align 4
    float32 m_flGridMajorWidth; // offset 0x34, size 0x4, align 4
    Color m_colGridOriginColor; // offset 0x38, size 0x4, align 4
    float32 m_flGridOriginWidth; // offset 0x3C, size 0x4, align 4
    float32 m_nFlowTooltipBoxMargin; // offset 0x40, size 0x4, align 4 | MPropertyStartGroup MPropertyAttributeRange
    char _pad_0044[0x4]; // offset 0x44
    CUtlString m_FontSequencePoint; // offset 0x48, size 0x8, align 8 | MPropertyAttributeEditor
    float32 m_flSequencePointRadius; // offset 0x50, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flSequencePointLinkWidth; // offset 0x54, size 0x4, align 4 | MPropertyAttributeRange
    Color m_colSequencePointFadeOverlay; // offset 0x58, size 0x4, align 4 | MPropertyColorPlusAlpha
    Color m_colSequencePointSpontaneous; // offset 0x5C, size 0x4, align 4
    Color m_colSequencePointYield; // offset 0x60, size 0x4, align 4
    Color m_colSequencePoint; // offset 0x64, size 0x4, align 4
    Color m_colSequencePointLink; // offset 0x68, size 0x4, align 4
    Color m_colSequencePointLinkYield; // offset 0x6C, size 0x4, align 4
    Color m_colSequencePointName; // offset 0x70, size 0x4, align 4
    Color m_colFlowTooltipBorder; // offset 0x74, size 0x4, align 4
    Color m_colFlowTooltipBackground; // offset 0x78, size 0x4, align 4
    Color m_colFlowTooltipForeground; // offset 0x7C, size 0x4, align 4
    float32 m_flPortDragOffCreateThreshold; // offset 0x80, size 0x4, align 4 | MPropertyAttributeRange
    Color m_colBool; // offset 0x84, size 0x4, align 4 | MPropertyStartGroup
    Color m_colNumber; // offset 0x88, size 0x4, align 4
    Color m_colString; // offset 0x8C, size 0x4, align 4
    Color m_colOther; // offset 0x90, size 0x4, align 4
    Color m_colCursorFlow; // offset 0x94, size 0x4, align 4
    CUtlString m_FontFlowTooltip; // offset 0x98, size 0x8, align 8 | MPropertyStartGroup MPropertyAttributeEditor
    CUtlString m_FontLiteral; // offset 0xA0, size 0x8, align 8 | MPropertyAttributeEditor
    CUtlString m_FontDomainName; // offset 0xA8, size 0x8, align 8 | MPropertyAttributeEditor
    Vector2D m_vDomainNameOffsetPX; // offset 0xB0, size 0x8, align 4
    Color m_colDomainName; // offset 0xB8, size 0x4, align 4
    Color m_colDomainNameWhenDebugging; // offset 0xBC, size 0x4, align 4
    CUtlString m_FontParentAssets; // offset 0xC0, size 0x8, align 8 | MPropertyAttributeEditor
    Color m_colParentAssets; // offset 0xC8, size 0x4, align 4
    Color m_colParentAssetsBroken; // offset 0xCC, size 0x4, align 4
    CUtlString m_FontCompileStatus; // offset 0xD0, size 0x8, align 8 | MPropertyAttributeEditor
    Color m_colCompileStatus; // offset 0xD8, size 0x4, align 4
    float32 m_flLiteralLabelSpacing; // offset 0xDC, size 0x4, align 4 | MPropertyStartGroup MPropertyAttributeRange
    Color m_colDebuggerBrokenBorder; // offset 0xE0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_00E4[0x4]; // offset 0xE4
    CUtlString m_DebuggerBrokenImg; // offset 0xE8, size 0x8, align 8
    CUtlString m_DebuggerBrokenOtherImg; // offset 0xF0, size 0x8, align 8
    CUtlString m_DebuggerBrokenStackImg; // offset 0xF8, size 0x8, align 8
    CUtlString m_DebuggerBrokenStackOtherImg; // offset 0x100, size 0x8, align 8
    float32 m_flDebuggerBrokenMarkerOffset; // offset 0x108, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flDebuggerBrokenMarkerSize; // offset 0x10C, size 0x4, align 4 | MPropertyAttributeRange
    CUtlString m_DebuggerBreakpointImg; // offset 0x110, size 0x8, align 8
    CUtlString m_DebuggerBreakpointDisabledImg; // offset 0x118, size 0x8, align 8
    float32 m_flYieldedCursorStackOffset; // offset 0x120, size 0x4, align 4 | MPropertyAttributeRange
    char _pad_0124[0x4]; // offset 0x124
    CUtlString m_GraphInstanceImg; // offset 0x128, size 0x8, align 8
    float32 m_flRecentExecTimeoutSec; // offset 0x130, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flRecentExecStartOffset; // offset 0x134, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flRecentExecEndOffset; // offset 0x138, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flRecentExecLineWidth; // offset 0x13C, size 0x4, align 4 | MPropertyAttributeRange
    Color m_colRecentExecStartColor; // offset 0x140, size 0x4, align 4 | MPropertyColorPlusAlpha
    Color m_colRecentExecEndColor; // offset 0x144, size 0x4, align 4 | MPropertyColorPlusAlpha
    Color m_colRecentExecRequirementFailStartColor; // offset 0x148, size 0x4, align 4 | MPropertyColorPlusAlpha
    Color m_colRecentExecRequirementFailEndColor; // offset 0x14C, size 0x4, align 4 | MPropertyColorPlusAlpha
    float32 m_flRecentExecConnectionIndicatorSize; // offset 0x150, size 0x4, align 4 | MPropertyAttributeRange
    char _pad_0154[0x4]; // offset 0x154
    CUtlString m_RecentExecConnectionIndicatorImg; // offset 0x158, size 0x8, align 8
    bool m_bBreakOnExceptions; // offset 0x160, size 0x1, align 1
    bool m_bShowExecutionHistory; // offset 0x161, size 0x1, align 1
    bool m_bBoxSelectRequiresFullyContained; // offset 0x162, size 0x1, align 1
    bool m_bShowFullContextLogging; // offset 0x163, size 0x1, align 1
    bool m_bFollowCursorDuringDebugSteps; // offset 0x164, size 0x1, align 1
    char _pad_0165[0x3]; // offset 0x165
    float32 m_flFlowMinWidth; // offset 0x168, size 0x4, align 4 | MPropertyStartGroup
    Color m_colSelectedBorder; // offset 0x16C, size 0x4, align 4
    float32 m_flAppendButtonSize; // offset 0x170, size 0x4, align 4 | MPropertyAttributeRange
    Color m_colAppendHover; // offset 0x174, size 0x4, align 4
    CUtlString m_AppendImg; // offset 0x178, size 0x8, align 8
    float32 m_flMoveChildArrowOffset; // offset 0x180, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flMoveChildArrowSize; // offset 0x184, size 0x4, align 4 | MPropertyAttributeRange
    CUtlString m_MoveChildArrowImg; // offset 0x188, size 0x8, align 8
    Color m_colMoveChildArrow; // offset 0x190, size 0x4, align 4
    float32 m_flConnectionTangentStrength; // offset 0x194, size 0x4, align 4 | MPropertyStartGroup MPropertyAttributeRange
    float32 m_flConnectionCurveSpacing; // offset 0x198, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flConnectionDeltaLimitScale; // offset 0x19C, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flBrokenConnectionOffset; // offset 0x1A0, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flConnectionInflowOffset; // offset 0x1A4, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flConnectionInparamOffset; // offset 0x1A8, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flConnectionInparamOffsetArray; // offset 0x1AC, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flConnectionCapBrokenSize; // offset 0x1B0, size 0x4, align 4 | MPropertyAttributeRange
    char _pad_01B4[0x4]; // offset 0x1B4
    CUtlString m_ConnectionCapBrokenImg; // offset 0x1B8, size 0x8, align 8
    float32 m_flConnectionColorLerpPercentageStart; // offset 0x1C0, size 0x4, align 4 | MPropertyAttributeRange
    Vector2D m_vecBlockCommentDefaultSize; // offset 0x1C4, size 0x8, align 4 | MPropertyStartGroup
    Vector2D m_vecBlockCommentMinSize; // offset 0x1CC, size 0x8, align 4
    Color m_colBlockCommentDefault; // offset 0x1D4, size 0x4, align 4
    Color m_colBlockCommentTextLight; // offset 0x1D8, size 0x4, align 4
    Color m_colBlockCommentTextDark; // offset 0x1DC, size 0x4, align 4
    float32 m_flBlockCommentRegionAlpha; // offset 0x1E0, size 0x4, align 4
    float32 m_flTimelineSeekBarHeight; // offset 0x1E4, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTimelinePauseIconSize; // offset 0x1E8, size 0x4, align 4
    float32 m_flTimelineCallModeIconSize; // offset 0x1EC, size 0x4, align 4
    CUtlString m_FontTimelineTime; // offset 0x1F0, size 0x8, align 8 | MPropertyAttributeEditor
    Color m_colTimelineLabel; // offset 0x1F8, size 0x4, align 4
    Vector2D m_vecTimelineIconFromPort; // offset 0x1FC, size 0x8, align 4
    Vector2D m_vecTimelinePauseIconOffset; // offset 0x204, size 0x8, align 4
    float32 m_flTimelineCursorHeight; // offset 0x20C, size 0x4, align 4
    float32 m_flTimelineCursorTextHeight; // offset 0x210, size 0x4, align 4
    char _pad_0214[0x4]; // offset 0x214
};
