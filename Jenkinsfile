pipeline {
    agent { label 'centos7' }
    environment {
        ImageTag="c:c17"
    }
    stages {
        stage('Compile C') {
            steps {
                echo "Compiling..."
                sh "gcc src/code.c -o dist/code"
            }
        }
        stage('Test Code') {
            steps {
                echo "Testing.."
                sh "dist/code"
            }
        }
        // stage('Build Dockerfile') {
        //     steps {
        //         script {
        //         def customImage = docker.build("$ImageTag-${env.BUILD_ID}")
        //         echo 'Deploying....'
        //         }
        //     }
        // }
    }
}