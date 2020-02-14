// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: analytic.proto

#include "analytic.pb.h"
#include "analytic.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace retail {

static const char* ProductService_method_names[] = {
  "/retail.ProductService/GetStoreInfo",
  "/retail.ProductService/GetWheather",
  "/retail.ProductService/GetSalesInfo",
  "/retail.ProductService/GetHotSpotInfo",
  "/retail.ProductService/GetOutputVideoDatas",
  "/retail.ProductService/GetStoreFrontCamera",
};

std::unique_ptr< ProductService::Stub> ProductService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ProductService::Stub> stub(new ProductService::Stub(channel));
  return stub;
}

ProductService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetStoreInfo_(ProductService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetWheather_(ProductService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetSalesInfo_(ProductService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetHotSpotInfo_(ProductService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetOutputVideoDatas_(ProductService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetStoreFrontCamera_(ProductService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ProductService::Stub::GetStoreInfo(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::retail::StoreQ* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetStoreInfo_, context, request, response);
}

void ProductService::Stub::experimental_async::GetStoreInfo(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::retail::StoreQ* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetStoreInfo_, context, request, response, std::move(f));
}

void ProductService::Stub::experimental_async::GetStoreInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::retail::StoreQ* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetStoreInfo_, context, request, response, std::move(f));
}

void ProductService::Stub::experimental_async::GetStoreInfo(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::retail::StoreQ* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetStoreInfo_, context, request, response, reactor);
}

void ProductService::Stub::experimental_async::GetStoreInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::retail::StoreQ* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetStoreInfo_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::retail::StoreQ>* ProductService::Stub::AsyncGetStoreInfoRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::retail::StoreQ>::Create(channel_.get(), cq, rpcmethod_GetStoreInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::retail::StoreQ>* ProductService::Stub::PrepareAsyncGetStoreInfoRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::retail::StoreQ>::Create(channel_.get(), cq, rpcmethod_GetStoreInfo_, context, request, false);
}

::grpc::Status ProductService::Stub::GetWheather(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::retail::Weather* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetWheather_, context, request, response);
}

void ProductService::Stub::experimental_async::GetWheather(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::retail::Weather* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetWheather_, context, request, response, std::move(f));
}

void ProductService::Stub::experimental_async::GetWheather(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::retail::Weather* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetWheather_, context, request, response, std::move(f));
}

void ProductService::Stub::experimental_async::GetWheather(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::retail::Weather* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetWheather_, context, request, response, reactor);
}

void ProductService::Stub::experimental_async::GetWheather(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::retail::Weather* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetWheather_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::retail::Weather>* ProductService::Stub::AsyncGetWheatherRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::retail::Weather>::Create(channel_.get(), cq, rpcmethod_GetWheather_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::retail::Weather>* ProductService::Stub::PrepareAsyncGetWheatherRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::retail::Weather>::Create(channel_.get(), cq, rpcmethod_GetWheather_, context, request, false);
}

::grpc::Status ProductService::Stub::GetSalesInfo(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::retail::PosQ* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetSalesInfo_, context, request, response);
}

void ProductService::Stub::experimental_async::GetSalesInfo(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::retail::PosQ* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetSalesInfo_, context, request, response, std::move(f));
}

void ProductService::Stub::experimental_async::GetSalesInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::retail::PosQ* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetSalesInfo_, context, request, response, std::move(f));
}

void ProductService::Stub::experimental_async::GetSalesInfo(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::retail::PosQ* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetSalesInfo_, context, request, response, reactor);
}

void ProductService::Stub::experimental_async::GetSalesInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::retail::PosQ* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetSalesInfo_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::retail::PosQ>* ProductService::Stub::AsyncGetSalesInfoRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::retail::PosQ>::Create(channel_.get(), cq, rpcmethod_GetSalesInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::retail::PosQ>* ProductService::Stub::PrepareAsyncGetSalesInfoRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::retail::PosQ>::Create(channel_.get(), cq, rpcmethod_GetSalesInfo_, context, request, false);
}

::grpc::Status ProductService::Stub::GetHotSpotInfo(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::retail::HotSpots* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetHotSpotInfo_, context, request, response);
}

void ProductService::Stub::experimental_async::GetHotSpotInfo(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::retail::HotSpots* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetHotSpotInfo_, context, request, response, std::move(f));
}

void ProductService::Stub::experimental_async::GetHotSpotInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::retail::HotSpots* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetHotSpotInfo_, context, request, response, std::move(f));
}

void ProductService::Stub::experimental_async::GetHotSpotInfo(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::retail::HotSpots* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetHotSpotInfo_, context, request, response, reactor);
}

void ProductService::Stub::experimental_async::GetHotSpotInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::retail::HotSpots* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetHotSpotInfo_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::retail::HotSpots>* ProductService::Stub::AsyncGetHotSpotInfoRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::retail::HotSpots>::Create(channel_.get(), cq, rpcmethod_GetHotSpotInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::retail::HotSpots>* ProductService::Stub::PrepareAsyncGetHotSpotInfoRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::retail::HotSpots>::Create(channel_.get(), cq, rpcmethod_GetHotSpotInfo_, context, request, false);
}

::grpc::Status ProductService::Stub::GetOutputVideoDatas(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::retail::OutputVideoDatas* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetOutputVideoDatas_, context, request, response);
}

void ProductService::Stub::experimental_async::GetOutputVideoDatas(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::retail::OutputVideoDatas* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetOutputVideoDatas_, context, request, response, std::move(f));
}

void ProductService::Stub::experimental_async::GetOutputVideoDatas(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::retail::OutputVideoDatas* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetOutputVideoDatas_, context, request, response, std::move(f));
}

void ProductService::Stub::experimental_async::GetOutputVideoDatas(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::retail::OutputVideoDatas* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetOutputVideoDatas_, context, request, response, reactor);
}

void ProductService::Stub::experimental_async::GetOutputVideoDatas(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::retail::OutputVideoDatas* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetOutputVideoDatas_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::retail::OutputVideoDatas>* ProductService::Stub::AsyncGetOutputVideoDatasRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::retail::OutputVideoDatas>::Create(channel_.get(), cq, rpcmethod_GetOutputVideoDatas_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::retail::OutputVideoDatas>* ProductService::Stub::PrepareAsyncGetOutputVideoDatasRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::retail::OutputVideoDatas>::Create(channel_.get(), cq, rpcmethod_GetOutputVideoDatas_, context, request, false);
}

::grpc::Status ProductService::Stub::GetStoreFrontCamera(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::retail::StoreFrontCamera* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetStoreFrontCamera_, context, request, response);
}

void ProductService::Stub::experimental_async::GetStoreFrontCamera(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::retail::StoreFrontCamera* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetStoreFrontCamera_, context, request, response, std::move(f));
}

void ProductService::Stub::experimental_async::GetStoreFrontCamera(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::retail::StoreFrontCamera* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetStoreFrontCamera_, context, request, response, std::move(f));
}

void ProductService::Stub::experimental_async::GetStoreFrontCamera(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::retail::StoreFrontCamera* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetStoreFrontCamera_, context, request, response, reactor);
}

void ProductService::Stub::experimental_async::GetStoreFrontCamera(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::retail::StoreFrontCamera* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetStoreFrontCamera_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::retail::StoreFrontCamera>* ProductService::Stub::AsyncGetStoreFrontCameraRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::retail::StoreFrontCamera>::Create(channel_.get(), cq, rpcmethod_GetStoreFrontCamera_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::retail::StoreFrontCamera>* ProductService::Stub::PrepareAsyncGetStoreFrontCameraRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::retail::StoreFrontCamera>::Create(channel_.get(), cq, rpcmethod_GetStoreFrontCamera_, context, request, false);
}

ProductService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ProductService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ProductService::Service, ::google::protobuf::Empty, ::retail::StoreQ>(
          std::mem_fn(&ProductService::Service::GetStoreInfo), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ProductService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ProductService::Service, ::google::protobuf::Empty, ::retail::Weather>(
          std::mem_fn(&ProductService::Service::GetWheather), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ProductService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ProductService::Service, ::google::protobuf::Empty, ::retail::PosQ>(
          std::mem_fn(&ProductService::Service::GetSalesInfo), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ProductService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ProductService::Service, ::google::protobuf::Empty, ::retail::HotSpots>(
          std::mem_fn(&ProductService::Service::GetHotSpotInfo), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ProductService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ProductService::Service, ::google::protobuf::Empty, ::retail::OutputVideoDatas>(
          std::mem_fn(&ProductService::Service::GetOutputVideoDatas), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ProductService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ProductService::Service, ::google::protobuf::Empty, ::retail::StoreFrontCamera>(
          std::mem_fn(&ProductService::Service::GetStoreFrontCamera), this)));
}

ProductService::Service::~Service() {
}

::grpc::Status ProductService::Service::GetStoreInfo(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::retail::StoreQ* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ProductService::Service::GetWheather(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::retail::Weather* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ProductService::Service::GetSalesInfo(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::retail::PosQ* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ProductService::Service::GetHotSpotInfo(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::retail::HotSpots* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ProductService::Service::GetOutputVideoDatas(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::retail::OutputVideoDatas* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ProductService::Service::GetStoreFrontCamera(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::retail::StoreFrontCamera* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace retail

