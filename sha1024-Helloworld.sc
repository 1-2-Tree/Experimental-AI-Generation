import java.security.MessageDigest import org.apache.commons.codec.binary.Hex import scala.collection.JavaConverters._ object HelloWorld { def main(args: Array[String]) { val message = "helloWorld" val digest = MessageDigest.getInstance("SHA-1024") digest.update(message.getBytes("UTF-8")) println(Hex.encodeHexString(digest.digest())) } }