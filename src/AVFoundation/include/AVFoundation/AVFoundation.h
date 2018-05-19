/*
 This file is part of Darling.

 Copyright (C) 2017 Lubos Dolezel

 Darling is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef _AVFoundation_H_
#define _AVFoundation_H_

#import <Foundation/Foundation.h>

#import <AVFoundation/AVAssetReaderOutputAdaptor.h>
#import <AVFoundation/AVAssetResourceLoaderRequest.h>
#import <AVFoundation/AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h>
#import <AVFoundation/AVAssetWriterInputMediaDataRequesterDelegate.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>
#import <AVFoundation/AVCallbackCancellation.h>
#import <AVFoundation/AVCaptureOperationDescriptor.h>
#import <AVFoundation/AVContentKeyRecipient.h>
#import <AVFoundation/AVContentKeySessionDelegate.h>
#import <AVFoundation/AVDecodedAudioSettingsForFig.h>
#import <AVFoundation/AVDecodedVideoSettingsForFig.h>
#import <AVFoundation/AVDelegateStorage.h>
#import <AVFoundation/AVDestinationChangeResultSource.h>
#import <AVFoundation/AVFigRouteDiscovererFactory.h>
#import <AVFoundation/AVFigRoutingContextCommunicationChannelManager.h>
#import <AVFoundation/AVFigRoutingContextFactory.h>
#import <AVFoundation/AVFigRoutingContextOutputDeviceTranslator.h>
#import <AVFoundation/AVFragmentMinding.h>
#import <AVFoundation/AVKVOIntrospection.h>
#import <AVFoundation/AVKVONotifier.h>
#import <AVFoundation/AVKeyPath.h>
#import <AVFoundation/AVKeyPathDependencyHost.h>
#import <AVFoundation/AVKeyPathDependencyRegistration.h>
#import <AVFoundation/AVMediaDataRequesterConsumer.h>
#import <AVFoundation/AVObjectMonitoring.h>
#import <AVFoundation/AVOutputContextCommunicationChannelImpl.h>
#import <AVFoundation/AVOutputContextImpl.h>
#import <AVFoundation/AVOutputContextManagerImpl.h>
#import <AVFoundation/AVOutputDeviceAuthorizationRequestImpl.h>
#import <AVFoundation/AVOutputDeviceAuthorizationSessionImpl.h>
#import <AVFoundation/AVOutputDeviceConfigurationModification.h>
#import <AVFoundation/AVOutputDeviceConfigurationRetrieval.h>
#import <AVFoundation/AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl.h>
#import <AVFoundation/AVOutputDeviceDiscoverySessionFactory.h>
#import <AVFoundation/AVOutputDeviceDiscoverySessionImpl.h>
#import <AVFoundation/AVOutputDeviceImpl.h>
#import <AVFoundation/AVOutputSettingsAssistantBaseSettingsProvider.h>
#import <AVFoundation/AVOutputSettingsAssistantVideoEncoderCapabilities.h>
#import <AVFoundation/AVOutputSettingsAssistantVideoSettingsAdjuster.h>
#import <AVFoundation/AVOutputSettingsValidation.h>
#import <AVFoundation/AVPlayerItemLegibleOutputDependencyFactory.h>
#import <AVFoundation/AVQueuedSampleBufferRendering.h>
#import <AVFoundation/AVQueuedSampleBufferRenderingInternal.h>
#import <AVFoundation/AVReencodedAudioSettingsForFig.h>
#import <AVFoundation/AVReencodedVideoSettingsForFig.h>
#import <AVFoundation/AVVideoCompositing.h>
#import <AVFoundation/AVVideoCompositionInstruction.h>
#import <AVFoundation/AVWeakObservable.h>
#import <AVFoundation/NSMutableCopying.h>
#import <AVFoundation/NSURLAuthenticationChallengeSender.h>
#import <AVFoundation/NSURLSessionDataDelegate.h>
#import <AVFoundation/NSURLSessionDelegate.h>
#import <AVFoundation/NSURLSessionTaskDelegate.h>
#import <AVFoundation/AVPlayerLayerIntermediateLayer.h>
#import <AVFoundation/AVPlayerLayerInternal.h>
#import <AVFoundation/AVPlayerLayer.h>
#import <AVFoundation/CMTimeAsValue.h>
#import <AVFoundation/CMTimeRangeAsValue.h>
#import <AVFoundation/CMTimeMappingAsValue.h>
#import <AVFoundation/AVFragmentedAssetInternal.h>
#import <AVFoundation/AVFragmentedAsset.h>
#import <AVFoundation/AVFragmentedMovieInternal.h>
#import <AVFoundation/AVFragmentedMovie.h>
#import <AVFoundation/AVFragmentedAssetMinderInternal.h>
#import <AVFoundation/AVFragmentedAssetMinder.h>
#import <AVFoundation/AVFragmentedMovieMinder.h>
#import <AVFoundation/AVFragmentedAssetTrackInternal.h>
#import <AVFoundation/AVFragmentedAssetTrack.h>
#import <AVFoundation/AVFragmentedMovieTrackInternal.h>
#import <AVFoundation/AVFragmentedMovieTrack.h>
#import <AVFoundation/AVMetadataItemInternal.h>
#import <AVFoundation/AVMetadataItem.h>
#import <AVFoundation/AVMutableMetadataItem.h>
#import <AVFoundation/AVLazyValueLoadingMetadataItemInternal.h>
#import <AVFoundation/AVLazyValueLoadingMetadataItem.h>
#import <AVFoundation/AVMetadataItemValueRequestInternal.h>
#import <AVFoundation/AVMetadataItemValueRequest.h>
#import <AVFoundation/AVChapterMetadataItemInternal.h>
#import <AVFoundation/AVChapterMetadataItem.h>
#import <AVFoundation/AVMetadataItemFilterForSharing.h>
#import <AVFoundation/AVMetadataItemFilterInternal.h>
#import <AVFoundation/AVMetadataItemFilter.h>
#import <AVFoundation/AVFigEndpointOutputDeviceImpl.h>
#import <AVFoundation/AVAssetInternal.h>
#import <AVFoundation/AVAsset.h>
#import <AVFoundation/AVURLAssetInternal.h>
#import <AVFoundation/AVURLAsset.h>
#import <AVFoundation/AVAssetClientURLRequestHelper.h>
#import <AVFoundation/AVDataAsset.h>
#import <AVFoundation/AVAssetTrackEnumerator.h>
#import <AVFoundation/AVAssetImageGeneratorInternal.h>
#import <AVFoundation/AVAssetImageGenerator.h>
#import <AVFoundation/AVAssetTrackInternal.h>
#import <AVFoundation/AVAssetTrack.h>
#import <AVFoundation/AVPlayerInternal.h>
#import <AVFoundation/AVPlayer.h>
#import <AVFoundation/AVPlayerQueueModificationDescription.h>
#import <AVFoundation/AVAssetWriterInputMetadataAdaptorInternal.h>
#import <AVFoundation/AVAssetWriterInputMetadataAdaptor.h>
#import <AVFoundation/AVPlayerItemInternal.h>
#import <AVFoundation/AVPlayerItem.h>
#import <AVFoundation/AVPlayerConnection.h>
#import <AVFoundation/AVPlayerItemTrackInternal.h>
#import <AVFoundation/AVPlayerItemTrack.h>
#import <AVFoundation/AVTimeFormatterInternal.h>
#import <AVFoundation/AVTimeFormatter.h>
#import <AVFoundation/AVQueuePlayer.h>
#import <AVFoundation/AVQueuePlayerInternal.h>
#import <AVFoundation/AVCompositionInternal.h>
#import <AVFoundation/AVComposition.h>
#import <AVFoundation/AVMutableCompositionInternal.h>
#import <AVFoundation/AVMutableComposition.h>
#import <AVFoundation/AVCompositionFormatReaderInspector.h>
#import <AVFoundation/AVCaptionRendererInternal.h>
#import <AVFoundation/AVCaptionRenderer.h>
#import <AVFoundation/AVCaptionRendererSceneInternal.h>
#import <AVFoundation/AVCaptionRendererScene.h>
#import <AVFoundation/AVCompositionTrackInternal.h>
#import <AVFoundation/AVCompositionTrack.h>
#import <AVFoundation/AVMutableCompositionTrackInternal.h>
#import <AVFoundation/AVMutableCompositionTrack.h>
#import <AVFoundation/AVAssetCustomURLRequest.h>
#import <AVFoundation/AVAssetCustomURLBridgeForNSURLSession.h>
#import <AVFoundation/AVNSURLProtocolRequest.h>
#import <AVFoundation/AVAssetCustomURLBridgeForNSURLProtocol.h>
#import <AVFoundation/AVCompositionTrackSegmentInternal.h>
#import <AVFoundation/AVCompositionTrackSegment.h>
#import <AVFoundation/AVAssetReaderInternal.h>
#import <AVFoundation/AVAssetReader.h>
#import <AVFoundation/AVMovieTrackInternal.h>
#import <AVFoundation/AVMovieTrack.h>
#import <AVFoundation/AVMutableMovieTrackInternal.h>
#import <AVFoundation/AVMutableMovieTrack.h>
#import <AVFoundation/AVAssetReaderOutputInternal.h>
#import <AVFoundation/AVAssetReaderOutput.h>
#import <AVFoundation/AVAssetReaderTrackOutputInternal.h>
#import <AVFoundation/AVAssetReaderTrackOutput.h>
#import <AVFoundation/AVAssetReaderAudioMixOutputInternal.h>
#import <AVFoundation/AVAssetReaderAudioMixOutput.h>
#import <AVFoundation/AVAssetReaderVideoCompositionOutputInternal.h>
#import <AVFoundation/AVAssetReaderVideoCompositionOutput.h>
#import <AVFoundation/AVAssetReaderSampleReferenceOutputInternal.h>
#import <AVFoundation/AVAssetReaderSampleReferenceOutput.h>
#import <AVFoundation/AVDataDelegateAssetInternal.h>
#import <AVFoundation/AVDataDelegateAsset.h>
#import <AVFoundation/AVAssetWriterConfigurationState.h>
#import <AVFoundation/AVAssetWriterInternal.h>
#import <AVFoundation/AVAssetWriter.h>
#import <AVFoundation/AVAssetWriterUnknownHelper.h>
#import <AVFoundation/AVAssetWriterFigAssetWriterNotificationHandler.h>
#import <AVFoundation/AVAssetWriterWritingHelper.h>
#import <AVFoundation/AVWorkaroundNSBlockOperation.h>
#import <AVFoundation/AVAssetWriterFinishWritingHelper.h>
#import <AVFoundation/AVFigAssetWriterFinishWritingAsyncOperation.h>
#import <AVFoundation/AVAssetWriterTerminalHelper.h>
#import <AVFoundation/AVAssetWriterFailedTerminalHelper.h>
#import <AVFoundation/AVAssetWriterClientInitiatedTerminalHelper.h>
#import <AVFoundation/AVAssetWriterHelper.h>
#import <AVFoundation/AVAssetWriterInputGroupInternal.h>
#import <AVFoundation/AVAssetWriterInputGroup.h>
#import <AVFoundation/AVAssetWriterInputSelectionOption.h>
#import <AVFoundation/AVAssetWriterInputConfigurationState.h>
#import <AVFoundation/AVAssetWriterInputInternal.h>
#import <AVFoundation/AVAssetWriterInput.h>
#import <AVFoundation/AVAssetWriterInputUnknownHelper.h>
#import <AVFoundation/AVAssetWriterInputWritingHelper.h>
#import <AVFoundation/AVAssetWriterInputInterPassAnalysisHelper.h>
#import <AVFoundation/AVAssetWriterInputNoMorePassesHelper.h>
#import <AVFoundation/AVAssetWriterInputTerminalHelper.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>
#import <AVFoundation/AVAssetWriterInputPixelBufferAdaptorInternal.h>
#import <AVFoundation/AVAssetWriterInputPixelBufferAdaptor.h>
#import <AVFoundation/AVFigAssetWriterTrack.h>
#import <AVFoundation/AVFigAssetWriterAudioTrack.h>
#import <AVFoundation/AVFigAssetWriterVideoTrack.h>
#import <AVFoundation/AVFigAssetWriterCaptionTrack.h>
#import <AVFoundation/AVFigAssetWriterGenericTrack.h>
#import <AVFoundation/AVAssetWriterInputMediaDataRequester.h>
#import <AVFoundation/AVAssetWriterInputPassDescriptionResponder.h>
#import <AVFoundation/AVAssetWriterInputFigAssetWriterEndPassOperation.h>
#import <AVFoundation/AVAssetWriterInputPassDescriptionInternal.h>
#import <AVFoundation/AVAssetWriterInputPassDescription.h>
#import <AVFoundation/AVVideoCompositionInstructionInternal.h>
#import <AVFoundation/AVVideoCompositionInstruction.h>
#import <AVFoundation/AVMutableVideoCompositionInstruction.h>
#import <AVFoundation/AVVideoCompositionLayerInstructionInternal.h>
#import <AVFoundation/AVVideoCompositionLayerInstruction.h>
#import <AVFoundation/AVMutableVideoCompositionLayerInstruction.h>
#import <AVFoundation/AVVideoCompositionInternal.h>
#import <AVFoundation/AVVideoComposition.h>
#import <AVFoundation/AVMutableVideoComposition.h>
#import <AVFoundation/AVVideoCompositionCoreAnimationTool.h>
#import <AVFoundation/AVVideoCompositionCoreAnimationToolInternal.h>
#import <AVFoundation/AVAssetExportSessionInternal.h>
#import <AVFoundation/AVAssetExportSession.h>
#import <AVFoundation/AVSynchronizedLayerInternal.h>
#import <AVFoundation/AVSynchronizedLayer.h>
#import <AVFoundation/AVExecutionEnvironment.h>
#import <AVFoundation/AVMetadataEnumerator.h>
#import <AVFoundation/AVAssetTrackSegment.h>
#import <AVFoundation/AVAssetReaderOutputCaptionAdaptorInternal.h>
#import <AVFoundation/AVAssetReaderOutputCaptionAdaptor.h>
#import <AVFoundation/AVPropertyStorage.h>
#import <AVFoundation/AVStreamSessionInternal.h>
#import <AVFoundation/AVStreamSession.h>
#import <AVFoundation/AVPlayerLooperInternal.h>
#import <AVFoundation/AVPlayerLooper.h>
#import <AVFoundation/AVAudioMix.h>
#import <AVFoundation/AVMutableAudioMix.h>
#import <AVFoundation/AVAudioMixInternal.h>
#import <AVFoundation/AVAudioMixInputParameters.h>
#import <AVFoundation/AVAudioMixInputParametersInternal.h>
#import <AVFoundation/AVMutableAudioMixInputParameters.h>
#import <AVFoundation/AVRunLoopConditionRunLoopState.h>
#import <AVFoundation/AVRunLoopCondition.h>
#import <AVFoundation/AVCaptionConversionValidator.h>
#import <AVFoundation/AVCaptionConversionWarning.h>
#import <AVFoundation/AVCaptionConversionAdjustment.h>
#import <AVFoundation/AVCaptionConversionTimeRangeAdjustment.h>
#import <AVFoundation/AVMediaDataStorageInternal.h>
#import <AVFoundation/AVMediaDataStorage.h>
#import <AVFoundation/AVMovieInternal.h>
#import <AVFoundation/AVMovie.h>
#import <AVFoundation/AVMutableMovieInternal.h>
#import <AVFoundation/AVMutableMovie.h>
#import <AVFoundation/AVAssetInspector.h>
#import <AVFoundation/AVFormatReaderInspector.h>
#import <AVFoundation/AVPlaybackItemInspector.h>
#import <AVFoundation/AVStreamingResourceInspector.h>
#import <AVFoundation/AVFigAssetInspector.h>
#import <AVFoundation/AVTimebaseObserver.h>
#import <AVFoundation/AVPeriodicTimebaseObserver.h>
#import <AVFoundation/AVOccasionalTimebaseObserver.h>
#import <AVFoundation/AVOnceTimebaseObserver.h>
#import <AVFoundation/AVAssetInspectorLoader.h>
#import <AVFoundation/AVAssetSynchronousInspectorLoader.h>
#import <AVFoundation/AVAssetMakeReadyForInspectionLoader.h>
#import <AVFoundation/AVPlaybackItemInspectorLoader.h>
#import <AVFoundation/AVFigAssetInspectorLoader.h>
#import <AVFoundation/AVUnreachableAssetInspectorLoader.h>
#import <AVFoundation/AVAssetTrackInspector.h>
#import <AVFoundation/AVTrackReaderInspector.h>
#import <AVFoundation/AVFigAssetTrackInspector.h>
#import <AVFoundation/AVCompositionTrackReaderInspector.h>
#import <AVFoundation/AVPlaybackItemTrackInspector.h>
#import <AVFoundation/AVFigRoutingContextSendConfigureDeviceCommandOperation.h>
#import <AVFoundation/AVRemoteFigRoutingContextFactory.h>
#import <AVFoundation/AVFigRoutingContextCommandOutputDeviceConfigurationModification.h>
#import <AVFoundation/AVFigRoutingContextCommandOutputDeviceConfiguration.h>
#import <AVFoundation/AVFigRoutingContextRouteChangeOperation.h>
#import <AVFoundation/AVRouteConfigUpdatedFigRoutingContextRouteChangeOperation.h>
#import <AVFoundation/AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl.h>
#import <AVFoundation/AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl.h>
#import <AVFoundation/AVCaptionFormatConformer.h>
#import <AVFoundation/AVContentKeyRequestInternal.h>
#import <AVFoundation/AVContentKeyRequest.h>
#import <AVFoundation/AVPersistableContentKeyRequest.h>
#import <AVFoundation/AVContentKeyResponseFairPlayStreaming.h>
#import <AVFoundation/AVContentKeyResponseClearKey.h>
#import <AVFoundation/AVContentKeyResponseInternal.h>
#import <AVFoundation/AVContentKeyResponse.h>
#import <AVFoundation/AVContentKeySessionInternal.h>
#import <AVFoundation/AVContentKeySession.h>
#import <AVFoundation/AVMetadataObjectInternal.h>
#import <AVFoundation/AVMetadataObject.h>
#import <AVFoundation/AVMetadataFaceObjectInternal.h>
#import <AVFoundation/AVMetadataFaceObject.h>
#import <AVFoundation/AVDispatchGroup.h>
#import <AVFoundation/AVEventWaiter.h>
#import <AVFoundation/AVWeakReference.h>
#import <AVFoundation/AVRetainReleaseWeakReference.h>
#import <AVFoundation/AVAssetWriterInputCaptionAdaptorInternal.h>
#import <AVFoundation/AVAssetWriterInputCaptionAdaptor.h>
#import <AVFoundation/AVCallbackContextRegistry.h>
#import <AVFoundation/AVCMNotificationDispatcher.h>
#import <AVFoundation/AVCMNotificationDispatcherListenerAndCallback.h>
#import <AVFoundation/AVCMNotificationDispatcherListenerKey.h>
#import <AVFoundation/AVAssetReaderOutputMetadataAdaptorInternal.h>
#import <AVFoundation/AVAssetReaderOutputMetadataAdaptor.h>
#import <AVFoundation/AVFigRouteDescriptorOutputDeviceImpl.h>
#import <AVFoundation/AVAssetTrackGroupInternal.h>
#import <AVFoundation/AVAssetTrackGroup.h>
#import <AVFoundation/AVMetadataGroup.h>
#import <AVFoundation/AVTimedMetadataGroupInternal.h>
#import <AVFoundation/AVTimedMetadataGroup.h>
#import <AVFoundation/AVMutableTimedMetadataGroup.h>
#import <AVFoundation/AVDateRangeMetadataGroupInternal.h>
#import <AVFoundation/AVDateRangeMetadataGroup.h>
#import <AVFoundation/AVMutableDateRangeMetadataGroup.h>
#import <AVFoundation/AVAssetCache.h>
#import <AVFoundation/AVManagedAssetCacheInternal.h>
#import <AVFoundation/AVManagedAssetCache.h>
#import <AVFoundation/AVAssetDownloadCacheInternal.h>
#import <AVFoundation/AVAssetDownloadCache.h>
#import <AVFoundation/AVCaptureAudioChannelInternal.h>
#import <AVFoundation/AVCaptureAudioChannel.h>
#import <AVFoundation/AVCaptureAudioDataOutputCallbackData.h>
#import <AVFoundation/AVCaptureAudioDataOutputInternal.h>
#import <AVFoundation/AVCaptureAudioDataOutput.h>
#import <AVFoundation/AVCaptureAudioFileOutputInternal.h>
#import <AVFoundation/AVCaptureAudioFileOutput.h>
#import <AVFoundation/AVNetworkPlaybackPerfHUDLayer.h>
#import <AVFoundation/AVCaptureAudioPreviewOutputInternal.h>
#import <AVFoundation/AVCaptureAudioPreviewOutput.h>
#import <AVFoundation/AVCaptureConnectionInternal.h>
#import <AVFoundation/AVCaptureConnection.h>
#import <AVFoundation/AVOutputContextInternal.h>
#import <AVFoundation/AVOutputContext.h>
#import <AVFoundation/AVOutputContextCommunicationChannelInternal.h>
#import <AVFoundation/AVOutputContextCommunicationChannel.h>
#import <AVFoundation/AVOutputContextDestinationChangeInternal.h>
#import <AVFoundation/AVOutputContextDestinationChange.h>
#import <AVFoundation/AVOutputContextManagerInternal.h>
#import <AVFoundation/AVOutputContextManager.h>
#import <AVFoundation/AVCaptureDALDevice.h>
#import <AVFoundation/AVCaptureDeviceInternal.h>
#import <AVFoundation/AVCaptureDevice.h>
#import <AVFoundation/AVOutputDeviceAuthorizationSessionInternal.h>
#import <AVFoundation/AVOutputDeviceAuthorizationSession.h>
#import <AVFoundation/AVOutputDeviceAuthorizationRequestInternal.h>
#import <AVFoundation/AVOutputDeviceAuthorizationRequest.h>
#import <AVFoundation/AVMediaDataRequester.h>
#import <AVFoundation/AVCaptureDeviceFormatInternal.h>
#import <AVFoundation/AVCaptureDeviceFormat.h>
#import <AVFoundation/AVStreamDataParserInternal.h>
#import <AVFoundation/AVStreamDataParser.h>
#import <AVFoundation/AVSampleBufferRenderSynchronizerInternal.h>
#import <AVFoundation/AVSampleBufferRenderSynchronizer.h>
#import <AVFoundation/AVCaptureDeviceInputInternal.h>
#import <AVFoundation/AVCaptureDeviceInput.h>
#import <AVFoundation/AVFigRemoteRouteDiscovererFactory.h>
#import <AVFoundation/AVFigRouteDiscovererOutputDeviceDiscoverySessionFactory.h>
#import <AVFoundation/AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl.h>
#import <AVFoundation/AVFigRouteDescriptorOutputDeviceDiscoverySessionAvailableOutputDevicesImpl.h>
#import <AVFoundation/AVSampleCursorInternal.h>
#import <AVFoundation/AVSampleCursor.h>
#import <AVFoundation/AVCaptureDeviceInputSourceInternal.h>
#import <AVFoundation/AVCaptureDeviceInputSource.h>
#import <AVFoundation/AVCaptureFileOutputRecordingOperationDescriptor.h>
#import <AVFoundation/AVCaptureFileOutputPauseOperationDescriptor.h>
#import <AVFoundation/AVCaptureFileOutputInternal.h>
#import <AVFoundation/AVCaptureFileOutput.h>
#import <AVFoundation/AVCaptureHALDevice.h>
#import <AVFoundation/AVFigEndpointPickerOutputDeviceDiscoverySessionImpl.h>
#import <AVFoundation/AVFigEndpointPickerOutputDeviceDiscoverySessionFactory.h>
#import <AVFoundation/AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl.h>
#import <AVFoundation/AVCaptureInputInternal.h>
#import <AVFoundation/AVCaptureInput.h>
#import <AVFoundation/AVCaptureInputPortInternal.h>
#import <AVFoundation/AVCaptureInputPort.h>
#import <AVFoundation/AVCaptionGroupInternal.h>
#import <AVFoundation/AVCaptionGroup.h>
#import <AVFoundation/AVCaptureMovieFileOutputInternal.h>
#import <AVFoundation/AVCaptureMovieFileOutput.h>
#import <AVFoundation/AVCaptureOperationDescriptorQueueItem.h>
#import <AVFoundation/AVCaptureOperationDescriptorQueue.h>
#import <AVFoundation/AVCaptureOutputInternal.h>
#import <AVFoundation/AVCaptureOutput.h>
#import <AVFoundation/AVCaptureScreenInputInternal.h>
#import <AVFoundation/AVCaptureScreenInput.h>
#import <AVFoundation/AVCaptureSessionInternal.h>
#import <AVFoundation/AVCaptureSessionInternalState.h>
#import <AVFoundation/AVCaptureSession.h>
#import <AVFoundation/AVCaptureVideoDataOutputCallbackData.h>
#import <AVFoundation/AVCaptureVideoDataOutputInternal.h>
#import <AVFoundation/AVCaptureVideoDataOutput.h>
#import <AVFoundation/AVCaptureVideoPreviewLayerInternal.h>
#import <AVFoundation/AVCaptureVideoPreviewLayer.h>
#import <AVFoundation/AVSampleBufferAudioRendererInternal.h>
#import <AVFoundation/AVSampleBufferAudioRenderer.h>
#import <AVFoundation/AVResolvedDecompressionSettings.h>
#import <AVFoundation/AVMediaSelectionInternal.h>
#import <AVFoundation/AVMediaSelection.h>
#import <AVFoundation/AVMutableMediaSelection.h>
#import <AVFoundation/MediaIOGraphNodeDescription.h>
#import <AVFoundation/AVAssetProxyInternal.h>
#import <AVFoundation/AVAssetProxy.h>
#import <AVFoundation/AVOutputDeviceDiscoverySessionInternal.h>
#import <AVFoundation/AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal.h>
#import <AVFoundation/AVOutputDeviceDiscoverySession.h>
#import <AVFoundation/AVEmptyOutputDeviceDiscoverySessionAvailableOutputDevices.h>
#import <AVFoundation/AVOutputDeviceDiscoverySessionAvailableOutputDevices.h>
#import <AVFoundation/MediaIOGraphNodeList.h>
#import <AVFoundation/AVAsynchronousCIImageFilteringRequestInternal.h>
#import <AVFoundation/AVAsynchronousCIImageFilteringRequest.h>
#import <AVFoundation/AVCoreImageFilterVideoCompositionInstruction.h>
#import <AVFoundation/AVCoreImageFilterCustomVideoCompositor.h>
#import <AVFoundation/AVCaptureStillImageRequest.h>
#import <AVFoundation/AVCaptureStillImageOutputInternal.h>
#import <AVFoundation/AVCaptureStillImageOutput.h>
#import <AVFoundation/AVPlayerItemMetadataCollectorInternal.h>
#import <AVFoundation/AVPlayerItemMetadataCollector.h>
#import <AVFoundation/AVPlayerItemAccessLogInternal.h>
#import <AVFoundation/AVPlayerItemAccessLog.h>
#import <AVFoundation/AVPlayerItemAccessLogEventInternal.h>
#import <AVFoundation/AVPlayerItemAccessLogEvent.h>
#import <AVFoundation/AVPlayerItemErrorLogInternal.h>
#import <AVFoundation/AVPlayerItemErrorLog.h>
#import <AVFoundation/AVPlayerItemErrorLogEventInternal.h>
#import <AVFoundation/AVPlayerItemErrorLogEvent.h>
#import <AVFoundation/AVKVODispatcher.h>
#import <AVFoundation/AVObservationBlockFactory.h>
#import <AVFoundation/AVWeakObservationBlockFactory.h>
#import <AVFoundation/AVClientBlockKVONotifier.h>
#import <AVFoundation/AVWeaklyObservedObjectClientBlockKVONotifier.h>
#import <AVFoundation/AVWeakObservableCallbackCancellationHelper.h>
#import <AVFoundation/AVKeyPathDependencyManager.h>
#import <AVFoundation/AVKeyPathDependency.h>
#import <AVFoundation/AVTwoPartKeyPath.h>
#import <AVFoundation/AVKeyPathFlattener.h>
#import <AVFoundation/AVKeyPathFlattenerKVOIntrospectionShim.h>
#import <AVFoundation/AVCaptureStillImageTransform.h>
#import <AVFoundation/AVCaptureStillImageOutputUtils.h>
#import <AVFoundation/AVFrameRateRangeInternal.h>
#import <AVFoundation/AVFrameRateRange.h>
#import <AVFoundation/AVMediaSelectionGroupInternal.h>
#import <AVFoundation/AVMediaSelectionGroup.h>
#import <AVFoundation/AVAssetMediaSelectionGroup.h>
#import <AVFoundation/AVMediaSelectionOptionInternal.h>
#import <AVFoundation/AVMediaSelectionOption.h>
#import <AVFoundation/AVMediaSelectionTrackOption.h>
#import <AVFoundation/AVMediaSelectionKeyValueOption.h>
#import <AVFoundation/AVFigObjectInspector.h>
#import <AVFoundation/AVFigRoutingContextOutputContextImpl.h>
#import <AVFoundation/AVFigCommChannelUUIDCommunicationChannelManager.h>
#import <AVFoundation/AVFigEndpointFigRoutingContextOutputDeviceTranslator.h>
#import <AVFoundation/AVFigRouteDescriptorFigRoutingContextOutputDeviceTranslator.h>
#import <AVFoundation/AVFigCommChannelUUIDOutputContextCommunicationChannelImpl.h>
#import <AVFoundation/AVFigEndpointUIAgentOutputContextManagerImpl.h>
#import <AVFoundation/AVDepthDataInternal.h>
#import <AVFoundation/AVDepthData.h>
#import <AVFoundation/AVAudioMixEffectParameters.h>
#import <AVFoundation/AVAudioMixSweepFilterEffectParameters.h>
#import <AVFoundation/AVAudioMixSweepFilterEffectParametersInternal.h>
#import <AVFoundation/AVOutputDeviceInternal.h>
#import <AVFoundation/AVOutputDevice.h>
#import <AVFoundation/AVOutputDeviceFrecencyManager.h>
#import <AVFoundation/AVOutputDeviceAuthorizedPeerInternal.h>
#import <AVFoundation/AVOutputDeviceAuthorizedPeer.h>
#import <AVFoundation/AVPairedDeviceInternal.h>
#import <AVFoundation/AVPairedDevice.h>
#import <AVFoundation/AVLocalOutputDeviceImpl.h>
#import <AVFoundation/AVCaptionPositionInternal.h>
#import <AVFoundation/AVCaptionPosition.h>
#import <AVFoundation/AVCaptionLengthInternal.h>
#import <AVFoundation/AVCaptionLength.h>
#import <AVFoundation/AVCaptionRegionInternal.h>
#import <AVFoundation/AVCaptionRegion.h>
#import <AVFoundation/AVMutableCaptionRegion.h>
#import <AVFoundation/AVCaptionInternal.h>
#import <AVFoundation/AVCaption.h>
#import <AVFoundation/AVMutableCaption.h>
#import <AVFoundation/AVCaptionRubyInternal.h>
#import <AVFoundation/AVCaptionRuby.h>
#import <AVFoundation/AVOutputSettings.h>
#import <AVFoundation/AVFormatSpecification.h>
#import <AVFoundation/AVSampleBufferGeneratorInternal.h>
#import <AVFoundation/AVSampleBufferGenerator.h>
#import <AVFoundation/AVSampleBufferRequestInternal.h>
#import <AVFoundation/AVSampleBufferRequest.h>
#import <AVFoundation/AVWeakReferencingDelegateStorage.h>
#import <AVFoundation/AVMediaFileType.h>
#import <AVFoundation/AVMediaFileOutputSettingsValidator.h>
#import <AVFoundation/AVWAVEOutputSettingsValidator.h>
#import <AVFoundation/AVAIFFOutputSettingsValidator.h>
#import <AVFoundation/AVAIFCOutputSettingsValidator.h>
#import <AVFoundation/AVISOOutputSettingsValidator.h>
#import <AVFoundation/AVGenericMediaFileOutputSettingsValidator.h>
#import <AVFoundation/AVOperation.h>
#import <AVFoundation/AVBlockOperation.h>
#import <AVFoundation/AVGlobalOperationQueue.h>
#import <AVFoundation/AVOperationQueueWithFundamentalDependency.h>
#import <AVFoundation/AVDepartureAnnouncingObjectMonitor.h>
#import <AVFoundation/AVWaitForNotificationOrDeallocationOperation.h>
#import <AVFoundation/AVAudioOutputSettings.h>
#import <AVFoundation/AVAVAudioSettingsAudioOutputSettings.h>
#import <AVFoundation/AVRouteDetectorInternal.h>
#import <AVFoundation/AVRouteDetector.h>
#import <AVFoundation/AVVideoOutputSettings.h>
#import <AVFoundation/AVPixelBufferAttributesVideoOutputSettings.h>
#import <AVFoundation/AVAVVideoSettingsVideoOutputSettings.h>
#import <AVFoundation/AVAudioSettingsValueConstrainer.h>
#import <AVFoundation/AVFloat64Range.h>
#import <AVFoundation/AVAggregateAssetDownloadTask.h>
#import <AVFoundation/AVAssetDownloadSessionInternal.h>
#import <AVFoundation/AVAssetDownloadSession.h>
#import <AVFoundation/AVPlayerItemOutputInternal.h>
#import <AVFoundation/AVPlayerItemOutput.h>
#import <AVFoundation/AVPlayerItemVideoOutputInternal.h>
#import <AVFoundation/AVPlayerItemVideoOutput.h>
#import <AVFoundation/AVFigEndpointPickerOutputContextImpl.h>
#import <AVFoundation/AVAssetCollectionInternal.h>
#import <AVFoundation/AVAssetCollection.h>
#import <AVFoundation/AVPlayerItemMediaDataCollectorInternal.h>
#import <AVFoundation/AVPlayerItemMediaDataCollector.h>
#import <AVFoundation/AVAssetCollectionFactory.h>
#import <AVFoundation/AVSampleBufferDisplayLayerContentLayer.h>
#import <AVFoundation/AVSampleBufferDisplayLayerInternal.h>
#import <AVFoundation/AVSampleBufferDisplayLayer.h>
#import <AVFoundation/AVVideoPerformanceMetricsInternal.h>
#import <AVFoundation/AVVideoPerformanceMetrics.h>
#import <AVFoundation/AVAssetCollectionInspector.h>
#import <AVFoundation/AVAssetCollectionInspectorLoader.h>
#import <AVFoundation/AVPixelBufferAttributeMediator.h>
#import <AVFoundation/AVStreamDataAssetTrackInspector.h>
#import <AVFoundation/AVStreamDataAssetInspector.h>
#import <AVFoundation/AVStreamDataInspectionOnlyAsset.h>
#import <AVFoundation/AVStreamDataAsset.h>
#import <AVFoundation/AVCaptureOutputSettings.h>
#import <AVFoundation/AVCaptureVideoSettings.h>
#import <AVFoundation/AVCaptureAudioSettings.h>
#import <AVFoundation/AVURLAuthenticationChallenge.h>
#import <AVFoundation/AVAssetResourceLoaderInternal.h>
#import <AVFoundation/AVAssetResourceLoader.h>
#import <AVFoundation/AVAssetResourceLoaderURLSessionDataDelegate.h>
#import <AVFoundation/AVAssetResourceLoaderURLSessionDataDelegateForCustomURLLoader.h>
#import <AVFoundation/AVAssetResourceLoadingContentInformationRequestInternal.h>
#import <AVFoundation/AVAssetResourceLoadingContentInformationRequest.h>
#import <AVFoundation/AVAssetResourceLoadingDataRequestInternal.h>
#import <AVFoundation/AVAssetResourceLoadingDataRequest.h>
#import <AVFoundation/AVAssetResourceLoadingRequestInternal.h>
#import <AVFoundation/AVAssetResourceLoadingRequest.h>
#import <AVFoundation/AVAssetResourceRenewalRequest.h>
#import <AVFoundation/AVTextStyleRuleInternal.h>
#import <AVFoundation/AVTextStyleRule.h>
#import <AVFoundation/AVAssetAnalysisReporter.h>
#import <AVFoundation/AVAssetAnalysisMessage.h>
#import <AVFoundation/AVAssetAnalysisTextParsingMessage.h>
#import <AVFoundation/AVPlayerMediaSelectionCriteria.h>
#import <AVFoundation/AVPlayerItemMetadataOutputInternal.h>
#import <AVFoundation/AVPlayerItemMetadataOutput.h>
#import <AVFoundation/AVPlayerItemLegibleOutputRealDependencyFactory.h>
#import <AVFoundation/AVPlayerItemLegibleOutputInternal.h>
#import <AVFoundation/AVPlayerItemLegibleOutput.h>
#import <AVFoundation/AVSegmentedMediaClosedCaptionReport.h>
#import <AVFoundation/AVSegmentedMediaReport.h>
#import <AVFoundation/AVMediaFileSegmenter.h>
#import <AVFoundation/AVOutputSettingsAssistantInternal.h>
#import <AVFoundation/AVOutputSettingsAssistant.h>
#import <AVFoundation/AVExportSettingsOutputSettingsAssistantBaseSettings.h>
#import <AVFoundation/AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster.h>
#import <AVFoundation/AVIOKitOutputSettingsAssistantVideoEncoderCapabilities.h>
#import <AVFoundation/AVCustomVideoCompositorSession.h>
#import <AVFoundation/AVScheduledAudioParametersInternal.h>
#import <AVFoundation/AVScheduledAudioParameters.h>
#import <AVFoundation/AVMutableScheduledAudioParameters.h>
#import <AVFoundation/AVAsynchronousVideoCompositionRequestInternal.h>
#import <AVFoundation/AVAsynchronousVideoCompositionRequest.h>
#import <AVFoundation/AVVideoCompositionRenderContextInternal.h>
#import <AVFoundation/AVVideoCompositionRenderContext.h>
#import <AVFoundation/AVCaptionGrouper.h>
#import <AVFoundation/AVCameraCalibrationDataInternal.h>
#import <AVFoundation/AVCameraCalibrationData.h>
#import <AVFoundation/AVCaptionOutputSettings.h>

void* AVMakeRectWithAspectRatioInsideRect(void);
void* AVMediaSubtypesForAC3(void);
void* AVMediaSubtypesForEnhancedAC3(void);
void* AVMediaTypesForCaptionEditing(void);
void* AVOutputDeviceGetFigRouteDescriptor(void);
void* CGAffineTransformFromNSArray(void);
void* MediaIODeviceConfigureToBestMatchPixelBufferAttributesAndMinimumFrameDuration(void);
void* MediaIOGraphConnectNodeToFanOutNode(void);
void* MediaIOGraphRemoveAllNodes(void);
void* MediaIOGraphUnusedNodeIndexForNodeFunctionalDesignation(void);
void* NSArrayFromCGAffineTransform(void);
void* NSArrayFromRGBAComponents(void);
void* NSArrayGetRGBAComponents(void);

#endif
